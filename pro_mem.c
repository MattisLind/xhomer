/* pro_mem.cpp: memory expansion board

   Copyright (c) 1997-2003, Tarik Isani (xhomer@isani.org)

   This file is part of Xhomer.

   Xhomer is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License version 2 
   as published by the Free Software Foundation.

   Xhomer is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Xhomer; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
/* Patched to work together with my patched version of mem.rom to provide
   3 meg of memory - Mattis Lind
*/
/*
MSC11-CK - 256Kb MEMORY MODULE FOR PC350. HAS 000034 ON HANDLE (Card ID)

// M8067-KC MSV11-PK 5014500-C Qbus Quad Wide 256-Kbyte MOS Memory with Parity CSR
// M7551-AC MSV11-QA 5017547-01-C1-P2 Qbus Quad Wide 1-Mbyte 22-Bit PAR CSR MOS RAM M7551-CA
*/
//#include "StdAfx.h"
#include "pdp11_defs.h"

/* XXX */
struct iolink {
	int	low;
	int	high;
	int	(*read)();
	int	(*write)(); };

extern struct iolink iotable[]; /* from pdp11_cpu */

/* size of MEM banks buffer (via RAM memory bank jumper set scheme) */
//#define PRO_MEM_MEMSIZE	128 * 1024		// 128 Kb - half populated RAM board
//#define PRO_MEM_MEMSIZE		256 * 1024		// 256 Kb - full populated RAM board
//#define PRO_MEM_MEMSIZE     512 * 1024
//#define PRO_MEM_MEMSIZE    1024 * 1024
//#define PRO_MEM_MEMSIZE    2 * 1024 * 1024
#define PRO_MEM_MEMSIZE    4 * 1024 * 1024
int PRO_MEM_VRAM[PRO_MEM_MEMSIZE];

unsigned char MEMROM[2048];

int	pro_mem_ptr;	// ROM address counter internal pointer
int	pro_mem_mbr;	// RAM memory base address register
int	pro_mem_base;	// Global RAM memory base address in iolink space
int	pro_mem_csr;	// Control/status register

/*
CTI Bus Memory Option Module Control/Status Register:
07	PERR	Parity Error is a read/write bit that means a parity error occured on a memory read operation when set.
			No parity error occured on a memory read operation when cleared. The bit may be cleared by writing a 0 to this register during a write low byte operation.
			Assertion of the CTI Bus INIT signal also clears this bit.
06	BERR	Bank Error is a read-only bit that functions regardless of whether the parity circuits are enabled.
			The bit is updated upon any occurrence of a parity error.
			It indicates that the parity error occured while reading bank 1 (chips E71-E88) when set; that the parity error occurred while reading bank 0 (chips E53-E70) when cleared.
05	FPOP	Fully Populated is a read-only bit. It means the board is fully populated with RAM chips in both banks when the bit is set.
			The board is half populated, bank 0 only, when the bit is cleared. The bit, in conjunction with bit 04 (SIZE), is used by the software to determine memory capacity of the board.
04	SIZE	This is a read-only bit that refers to RAM IC chip size. When cleared, it indicates that 64K size IC chips are resident. The set state is reserved for a future IC chip size.
03	Not used	This read-only bit is always seen as 0.
02	WROP	Diagnostic Write Opposite is a read/write bit.
			Software verifies that the parity circuits function correctly with the use of this control bit.
			The bit functions regardless of whether or not parity sensing is enabled.
			Opposite parity is generated on write to RAM memory operations when the bit is set.
			Correct parity is generated when the bit is cleared.
			The bit is also cleared by the CTI Bus INIT signal.
01	PTEN	Parity Trap ENable is a read/write bit.
			The BMER (Memory Parity Trap Error) signal on the CTI Bus is enabled by this slave module upon the occurrence of a parity error, providing this control bit is set.
			Thus, a parity trap to the CPU is enabled.
			Parity generation and parity sensing functions normally when this control bit is cleared, but does not assert a BMER signal; hence the memory parity trap to the CPU is disabled.
			The bit is also cleared by the CTI Bus INIT signal.
00	MEMEN	This is a read/write bit. The bit is preset to the cleared state upon power up so that access to ram memory is prohibited.
			The bit should be programmmed to the set state only after the lower boundary value for the board's RAM memory has been written into the RAM base address register in order to prevent conflict within the map of addressable system memory space. The set state permits access to the board's memory-locations.

CTI Bus Self-Diagnostic Error Code Listing:
Error Number - Error Definition
XX0000 - No errors were detected.
XX0001 - The control/status register initialized improperly (����� ��������� ������� 175006 <07>, <06>, <02> ��� <01> == 1).
XX0002 - Illegal configuration; this memory module cannot be configured because the cumulative system RAM already exceeds 3 megabytes.
XX0003 - A memory error trap failed to occur when addresses higher than the 3 megabyte limit were attempted on a system configuration exceeding that limit by including this module's memory capacity.
XX0004 - The parity circuits failed to detect the incorrect parity written.
XX0005 - Bad data was read from memory (������ ������/���������� ���������� ���� � �������������� ���).
XX0006 - An unexpected nonexistent memory trap occurred (����� ������ ��������������� ��� �� ��������).
XX0007 - An unexpected memory parity trap occurred.
XX0010 - The control/status register bits do not match those associated with the CTI Bus BMER signal of a memory parity trap condition.

Error codes defined by the base system module:
XX0374	Device not in "option present" register (slot option generated identification number, but slot option detection hardware indicates that option is not present)
XX0375	ID read as 0
XX0376	Error check failed on contents of ROM on device (slot option has a bad ROM)
XX0377	Bus time out trap reading device ID
*/


/* Extended memory */
int pro_vmem_rd (int *data, int pa, int access) // Read memory access time: 515...600 ns
{
int	vindex;

	vindex = (pa - iotable[1].low) >> 1;
	*data = PRO_MEM_VRAM[vindex];

	return SCPE_OK;
}

int pro_vmem_wr (int data, int pa, int access) // Write memory access time: 725...770 ns
{
int	vindex;

	vindex = (pa - iotable[1].low) >> 1;
	WRITE_WB(PRO_MEM_VRAM[vindex], 0177777, access);
	return SCPE_OK;
}


/* Memory board registers */
/* Addresses 17775000-17775006 */
int pro_mem_rd (int pa)
{
int data;

	switch (pa & 017777776)
	{
		case 017775000:							// ROM data register. Low byte R/O.
			data = MEMROM[pro_mem_ptr++];
			if (pro_mem_ptr >= 07777)
				pro_mem_ptr = 0;
			break;
		case 017775002:							// ROM address counter
			data = 0;
			break;
		case 017775004:							// RAM base address register
			data = 0;
			break;
		case 017775006:							// Control/status register
			data = pro_mem_csr;
 			break;
	}
	return data;
}

void pro_mem_wr (int data, int pa, int access)
{
	switch (pa & 017777776)
	{
		case 017775002:							// ROM address counter
			/* Reset memory pointer */
			pro_mem_ptr = 0;
			break;
		case 017775004:							// RAM base address register
			 /* Calculated lower limit boundary - starting address of the contiguous address through the entire RAM module address range */
			WRITE_W(pro_mem_mbr, PRO_MEM_MBR_W);
			pro_mem_base = pro_mem_mbr << 15;
			 
			/* Update CPU memory decoder */
			iotable[1].low = pro_mem_base;
			iotable[1].high = ((pro_mem_base + PRO_MEM_MEMSIZE - 1) > 013777777)?013777777:(pro_mem_base + PRO_MEM_MEMSIZE - 1);
			printf ("low=%08o high=%08o\n", iotable[1].low, iotable[1].high );
			break;
		case 017775006:							// Control/status register
			WRITE_WB(pro_mem_csr, 0377, access);
			break;
	}
}


void pro_mem_reset ()
{
	pro_mem_ptr = 0;
	pro_mem_mbr = 0;
	pro_mem_base = 0;
	if (PRO_MEM_MEMSIZE	== 128 * 1024)
		pro_mem_csr = 000; // when board is fully populated with RAM chips
	else if (PRO_MEM_MEMSIZE == 2 * 1024 * 1024 ) 
		pro_mem_csr = 000; // when board is half populated with RAM chips
	else if (PRO_MEM_MEMSIZE == 4 * 1024 * 1024 ) 
		pro_mem_csr = 040;
	else pro_mem_csr = 060;
	memset(PRO_MEM_VRAM, 0, PRO_MEM_MEMSIZE);
	
	/* Update CPU memory decoder (as initialy hardcoded in pdp11_cpu) */
	iotable[1].low = 01000000;
	iotable[1].high = 01777777;
}


void pro_mem_exit ()
{
}
