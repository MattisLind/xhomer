/* pro_kenels.h: Filter kernels for scaling framebuffer horizontally to 640 pixels

   Copyright (c) 1997-2024, Tarik Isani (xhomer@isani.org)

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

#define		PRO_SCALE_OUTNUM	640
#define		PRO_SCALE_MAXTAPS	8

/* Filter kernels for down scaler */

LOCAL int	pro_kernels[PRO_SCALE_OUTNUM][PRO_SCALE_MAXTAPS+1] =
  {
    {0, 175, 166, -63, -22, 0, 0, 0, 0},
    {0, -29, 142, 146, 22, -34, 9, 0, 0},
    {1, -34, 48, 157, 102, -17, -20, 20, 0},
    {1, 20, -20, -17, 102, 157, 48, -34, 0},
    {3, 9, -34, 22, 146, 126, 0, -29, 16},
    {5, -11, -31, 83, 174, 83, -31, -11, 0},
    {6, 16, -29, 0, 126, 146, 22, -34, 9},
    {9, -34, 48, 157, 102, -17, -20, 20, 0},
    {9, 20, -20, -17, 102, 157, 48, -34, 0},
    {11, 9, -34, 22, 146, 126, 0, -29, 16},
    {13, -11, -31, 83, 174, 83, -31, -11, 0},
    {14, 16, -29, 0, 126, 146, 22, -34, 9},
    {17, -34, 48, 157, 102, -17, -20, 20, 0},
    {17, 20, -20, -17, 102, 157, 48, -34, 0},
    {19, 9, -34, 22, 146, 126, 0, -29, 16},
    {21, -11, -31, 83, 174, 83, -31, -11, 0},
    {22, 16, -29, 0, 126, 146, 22, -34, 9},
    {25, -34, 48, 157, 102, -17, -20, 20, 0},
    {25, 20, -20, -17, 102, 157, 48, -34, 0},
    {27, 9, -34, 22, 146, 126, 0, -29, 16},
    {29, -11, -31, 83, 174, 83, -31, -11, 0},
    {30, 16, -29, 0, 126, 146, 22, -34, 9},
    {33, -34, 48, 157, 102, -17, -20, 20, 0},
    {33, 20, -20, -17, 102, 157, 48, -34, 0},
    {35, 9, -34, 22, 146, 126, 0, -29, 16},
    {37, -11, -31, 83, 174, 83, -31, -11, 0},
    {38, 16, -29, 0, 126, 146, 22, -34, 9},
    {41, -34, 48, 157, 102, -17, -20, 20, 0},
    {41, 20, -20, -17, 102, 157, 48, -34, 0},
    {43, 9, -34, 22, 146, 126, 0, -29, 16},
    {45, -11, -31, 83, 174, 83, -31, -11, 0},
    {46, 16, -29, 0, 126, 146, 22, -34, 9},
    {49, -34, 48, 157, 102, -17, -20, 20, 0},
    {49, 20, -20, -17, 102, 157, 48, -34, 0},
    {51, 9, -34, 22, 146, 126, 0, -29, 16},
    {53, -11, -31, 83, 174, 83, -31, -11, 0},
    {54, 16, -29, 0, 126, 146, 22, -34, 9},
    {57, -34, 48, 157, 102, -17, -20, 20, 0},
    {57, 20, -20, -17, 102, 157, 48, -34, 0},
    {59, 9, -34, 22, 146, 126, 0, -29, 16},
    {61, -11, -31, 83, 174, 83, -31, -11, 0},
    {62, 16, -29, 0, 126, 146, 22, -34, 9},
    {65, -34, 48, 157, 102, -17, -20, 20, 0},
    {65, 20, -20, -17, 102, 157, 48, -34, 0},
    {67, 9, -34, 22, 146, 126, 0, -29, 16},
    {69, -11, -31, 83, 174, 83, -31, -11, 0},
    {70, 16, -29, 0, 126, 146, 22, -34, 9},
    {73, -34, 48, 157, 102, -17, -20, 20, 0},
    {73, 20, -20, -17, 102, 157, 48, -34, 0},
    {75, 9, -34, 22, 146, 126, 0, -29, 16},
    {77, -11, -31, 83, 174, 83, -31, -11, 0},
    {78, 16, -29, 0, 126, 146, 22, -34, 9},
    {81, -34, 48, 157, 102, -17, -20, 20, 0},
    {81, 20, -20, -17, 102, 157, 48, -34, 0},
    {83, 9, -34, 22, 146, 126, 0, -29, 16},
    {85, -11, -31, 83, 174, 83, -31, -11, 0},
    {86, 16, -29, 0, 126, 146, 22, -34, 9},
    {89, -34, 48, 157, 102, -17, -20, 20, 0},
    {89, 20, -20, -17, 102, 157, 48, -34, 0},
    {91, 9, -34, 22, 146, 126, 0, -29, 16},
    {93, -11, -31, 83, 174, 83, -31, -11, 0},
    {94, 16, -29, 0, 126, 146, 22, -34, 9},
    {97, -34, 48, 157, 102, -17, -20, 20, 0},
    {97, 20, -20, -17, 102, 157, 48, -34, 0},
    {99, 9, -34, 22, 146, 126, 0, -29, 16},
    {101, -11, -31, 83, 174, 83, -31, -11, 0},
    {102, 16, -29, 0, 126, 146, 22, -34, 9},
    {105, -34, 48, 157, 102, -17, -20, 20, 0},
    {105, 20, -20, -17, 102, 157, 48, -34, 0},
    {107, 9, -34, 22, 146, 126, 0, -29, 16},
    {109, -11, -31, 83, 174, 83, -31, -11, 0},
    {110, 16, -29, 0, 126, 146, 22, -34, 9},
    {113, -34, 48, 157, 102, -17, -20, 20, 0},
    {113, 20, -20, -17, 102, 157, 48, -34, 0},
    {115, 9, -34, 22, 146, 126, 0, -29, 16},
    {117, -11, -31, 83, 174, 83, -31, -11, 0},
    {118, 16, -29, 0, 126, 146, 22, -34, 9},
    {121, -34, 48, 157, 102, -17, -20, 20, 0},
    {121, 20, -20, -17, 102, 157, 48, -34, 0},
    {123, 9, -34, 22, 146, 126, 0, -29, 16},
    {125, -11, -31, 83, 174, 83, -31, -11, 0},
    {126, 16, -29, 0, 126, 146, 22, -34, 9},
    {129, -34, 48, 157, 102, -17, -20, 20, 0},
    {129, 20, -20, -17, 102, 157, 48, -34, 0},
    {131, 9, -34, 22, 146, 126, 0, -29, 16},
    {133, -11, -31, 83, 174, 83, -31, -11, 0},
    {134, 16, -29, 0, 126, 146, 22, -34, 9},
    {137, -34, 48, 157, 102, -17, -20, 20, 0},
    {137, 20, -20, -17, 102, 157, 48, -34, 0},
    {139, 9, -34, 22, 146, 126, 0, -29, 16},
    {141, -11, -31, 83, 174, 83, -31, -11, 0},
    {142, 16, -29, 0, 126, 146, 22, -34, 9},
    {145, -34, 48, 157, 102, -17, -20, 20, 0},
    {145, 20, -20, -17, 102, 157, 48, -34, 0},
    {147, 9, -34, 22, 146, 126, 0, -29, 16},
    {149, -11, -31, 83, 174, 83, -31, -11, 0},
    {150, 16, -29, 0, 126, 146, 22, -34, 9},
    {153, -34, 48, 157, 102, -17, -20, 20, 0},
    {153, 20, -20, -17, 102, 157, 48, -34, 0},
    {155, 9, -34, 22, 146, 126, 0, -29, 16},
    {157, -11, -31, 83, 174, 83, -31, -11, 0},
    {158, 16, -29, 0, 126, 146, 22, -34, 9},
    {161, -34, 48, 157, 102, -17, -20, 20, 0},
    {161, 20, -20, -17, 102, 157, 48, -34, 0},
    {163, 9, -34, 22, 146, 126, 0, -29, 16},
    {165, -11, -31, 83, 174, 83, -31, -11, 0},
    {166, 16, -29, 0, 126, 146, 22, -34, 9},
    {169, -34, 48, 157, 102, -17, -20, 20, 0},
    {169, 20, -20, -17, 102, 157, 48, -34, 0},
    {171, 9, -34, 22, 146, 126, 0, -29, 16},
    {173, -11, -31, 83, 174, 83, -31, -11, 0},
    {174, 16, -29, 0, 126, 146, 22, -34, 9},
    {177, -34, 48, 157, 102, -17, -20, 20, 0},
    {177, 20, -20, -17, 102, 157, 48, -34, 0},
    {179, 9, -34, 22, 146, 126, 0, -29, 16},
    {181, -11, -31, 83, 174, 83, -31, -11, 0},
    {182, 16, -29, 0, 126, 146, 22, -34, 9},
    {185, -34, 48, 157, 102, -17, -20, 20, 0},
    {185, 20, -20, -17, 102, 157, 48, -34, 0},
    {187, 9, -34, 22, 146, 126, 0, -29, 16},
    {189, -11, -31, 83, 174, 83, -31, -11, 0},
    {190, 16, -29, 0, 126, 146, 22, -34, 9},
    {193, -34, 48, 157, 102, -17, -20, 20, 0},
    {193, 20, -20, -17, 102, 157, 48, -34, 0},
    {195, 9, -34, 22, 146, 126, 0, -29, 16},
    {197, -11, -31, 83, 174, 83, -31, -11, 0},
    {198, 16, -29, 0, 126, 146, 22, -34, 9},
    {201, -34, 48, 157, 102, -17, -20, 20, 0},
    {201, 20, -20, -17, 102, 157, 48, -34, 0},
    {203, 9, -34, 22, 146, 126, 0, -29, 16},
    {205, -11, -31, 83, 174, 83, -31, -11, 0},
    {206, 16, -29, 0, 126, 146, 22, -34, 9},
    {209, -34, 48, 157, 102, -17, -20, 20, 0},
    {209, 20, -20, -17, 102, 157, 48, -34, 0},
    {211, 9, -34, 22, 146, 126, 0, -29, 16},
    {213, -11, -31, 83, 174, 83, -31, -11, 0},
    {214, 16, -29, 0, 126, 146, 22, -34, 9},
    {217, -34, 48, 157, 102, -17, -20, 20, 0},
    {217, 20, -20, -17, 102, 157, 48, -34, 0},
    {219, 9, -34, 22, 146, 126, 0, -29, 16},
    {221, -11, -31, 83, 174, 83, -31, -11, 0},
    {222, 16, -29, 0, 126, 146, 22, -34, 9},
    {225, -34, 48, 157, 102, -17, -20, 20, 0},
    {225, 20, -20, -17, 102, 157, 48, -34, 0},
    {227, 9, -34, 22, 146, 126, 0, -29, 16},
    {229, -11, -31, 83, 174, 83, -31, -11, 0},
    {230, 16, -29, 0, 126, 146, 22, -34, 9},
    {233, -34, 48, 157, 102, -17, -20, 20, 0},
    {233, 20, -20, -17, 102, 157, 48, -34, 0},
    {235, 9, -34, 22, 146, 126, 0, -29, 16},
    {237, -11, -31, 83, 174, 83, -31, -11, 0},
    {238, 16, -29, 0, 126, 146, 22, -34, 9},
    {241, -34, 48, 157, 102, -17, -20, 20, 0},
    {241, 20, -20, -17, 102, 157, 48, -34, 0},
    {243, 9, -34, 22, 146, 126, 0, -29, 16},
    {245, -11, -31, 83, 174, 83, -31, -11, 0},
    {246, 16, -29, 0, 126, 146, 22, -34, 9},
    {249, -34, 48, 157, 102, -17, -20, 20, 0},
    {249, 20, -20, -17, 102, 157, 48, -34, 0},
    {251, 9, -34, 22, 146, 126, 0, -29, 16},
    {253, -11, -31, 83, 174, 83, -31, -11, 0},
    {254, 16, -29, 0, 126, 146, 22, -34, 9},
    {257, -34, 48, 157, 102, -17, -20, 20, 0},
    {257, 20, -20, -17, 102, 157, 48, -34, 0},
    {259, 9, -34, 22, 146, 126, 0, -29, 16},
    {261, -11, -31, 83, 174, 83, -31, -11, 0},
    {262, 16, -29, 0, 126, 146, 22, -34, 9},
    {265, -34, 48, 157, 102, -17, -20, 20, 0},
    {265, 20, -20, -17, 102, 157, 48, -34, 0},
    {267, 9, -34, 22, 146, 126, 0, -29, 16},
    {269, -11, -31, 83, 174, 83, -31, -11, 0},
    {270, 16, -29, 0, 126, 146, 22, -34, 9},
    {273, -34, 48, 157, 102, -17, -20, 20, 0},
    {273, 20, -20, -17, 102, 157, 48, -34, 0},
    {275, 9, -34, 22, 146, 126, 0, -29, 16},
    {277, -11, -31, 83, 174, 83, -31, -11, 0},
    {278, 16, -29, 0, 126, 146, 22, -34, 9},
    {281, -34, 48, 157, 102, -17, -20, 20, 0},
    {281, 20, -20, -17, 102, 157, 48, -34, 0},
    {283, 9, -34, 22, 146, 126, 0, -29, 16},
    {285, -11, -31, 83, 174, 83, -31, -11, 0},
    {286, 16, -29, 0, 126, 146, 22, -34, 9},
    {289, -34, 48, 157, 102, -17, -20, 20, 0},
    {289, 20, -20, -17, 102, 157, 48, -34, 0},
    {291, 9, -34, 22, 146, 126, 0, -29, 16},
    {293, -11, -31, 83, 174, 83, -31, -11, 0},
    {294, 16, -29, 0, 126, 146, 22, -34, 9},
    {297, -34, 48, 157, 102, -17, -20, 20, 0},
    {297, 20, -20, -17, 102, 157, 48, -34, 0},
    {299, 9, -34, 22, 146, 126, 0, -29, 16},
    {301, -11, -31, 83, 174, 83, -31, -11, 0},
    {302, 16, -29, 0, 126, 146, 22, -34, 9},
    {305, -34, 48, 157, 102, -17, -20, 20, 0},
    {305, 20, -20, -17, 102, 157, 48, -34, 0},
    {307, 9, -34, 22, 146, 126, 0, -29, 16},
    {309, -11, -31, 83, 174, 83, -31, -11, 0},
    {310, 16, -29, 0, 126, 146, 22, -34, 9},
    {313, -34, 48, 157, 102, -17, -20, 20, 0},
    {313, 20, -20, -17, 102, 157, 48, -34, 0},
    {315, 9, -34, 22, 146, 126, 0, -29, 16},
    {317, -11, -31, 83, 174, 83, -31, -11, 0},
    {318, 16, -29, 0, 126, 146, 22, -34, 9},
    {321, -34, 48, 157, 102, -17, -20, 20, 0},
    {321, 20, -20, -17, 102, 157, 48, -34, 0},
    {323, 9, -34, 22, 146, 126, 0, -29, 16},
    {325, -11, -31, 83, 174, 83, -31, -11, 0},
    {326, 16, -29, 0, 126, 146, 22, -34, 9},
    {329, -34, 48, 157, 102, -17, -20, 20, 0},
    {329, 20, -20, -17, 102, 157, 48, -34, 0},
    {331, 9, -34, 22, 146, 126, 0, -29, 16},
    {333, -11, -31, 83, 174, 83, -31, -11, 0},
    {334, 16, -29, 0, 126, 146, 22, -34, 9},
    {337, -34, 48, 157, 102, -17, -20, 20, 0},
    {337, 20, -20, -17, 102, 157, 48, -34, 0},
    {339, 9, -34, 22, 146, 126, 0, -29, 16},
    {341, -11, -31, 83, 174, 83, -31, -11, 0},
    {342, 16, -29, 0, 126, 146, 22, -34, 9},
    {345, -34, 48, 157, 102, -17, -20, 20, 0},
    {345, 20, -20, -17, 102, 157, 48, -34, 0},
    {347, 9, -34, 22, 146, 126, 0, -29, 16},
    {349, -11, -31, 83, 174, 83, -31, -11, 0},
    {350, 16, -29, 0, 126, 146, 22, -34, 9},
    {353, -34, 48, 157, 102, -17, -20, 20, 0},
    {353, 20, -20, -17, 102, 157, 48, -34, 0},
    {355, 9, -34, 22, 146, 126, 0, -29, 16},
    {357, -11, -31, 83, 174, 83, -31, -11, 0},
    {358, 16, -29, 0, 126, 146, 22, -34, 9},
    {361, -34, 48, 157, 102, -17, -20, 20, 0},
    {361, 20, -20, -17, 102, 157, 48, -34, 0},
    {363, 9, -34, 22, 146, 126, 0, -29, 16},
    {365, -11, -31, 83, 174, 83, -31, -11, 0},
    {366, 16, -29, 0, 126, 146, 22, -34, 9},
    {369, -34, 48, 157, 102, -17, -20, 20, 0},
    {369, 20, -20, -17, 102, 157, 48, -34, 0},
    {371, 9, -34, 22, 146, 126, 0, -29, 16},
    {373, -11, -31, 83, 174, 83, -31, -11, 0},
    {374, 16, -29, 0, 126, 146, 22, -34, 9},
    {377, -34, 48, 157, 102, -17, -20, 20, 0},
    {377, 20, -20, -17, 102, 157, 48, -34, 0},
    {379, 9, -34, 22, 146, 126, 0, -29, 16},
    {381, -11, -31, 83, 174, 83, -31, -11, 0},
    {382, 16, -29, 0, 126, 146, 22, -34, 9},
    {385, -34, 48, 157, 102, -17, -20, 20, 0},
    {385, 20, -20, -17, 102, 157, 48, -34, 0},
    {387, 9, -34, 22, 146, 126, 0, -29, 16},
    {389, -11, -31, 83, 174, 83, -31, -11, 0},
    {390, 16, -29, 0, 126, 146, 22, -34, 9},
    {393, -34, 48, 157, 102, -17, -20, 20, 0},
    {393, 20, -20, -17, 102, 157, 48, -34, 0},
    {395, 9, -34, 22, 146, 126, 0, -29, 16},
    {397, -11, -31, 83, 174, 83, -31, -11, 0},
    {398, 16, -29, 0, 126, 146, 22, -34, 9},
    {401, -34, 48, 157, 102, -17, -20, 20, 0},
    {401, 20, -20, -17, 102, 157, 48, -34, 0},
    {403, 9, -34, 22, 146, 126, 0, -29, 16},
    {405, -11, -31, 83, 174, 83, -31, -11, 0},
    {406, 16, -29, 0, 126, 146, 22, -34, 9},
    {409, -34, 48, 157, 102, -17, -20, 20, 0},
    {409, 20, -20, -17, 102, 157, 48, -34, 0},
    {411, 9, -34, 22, 146, 126, 0, -29, 16},
    {413, -11, -31, 83, 174, 83, -31, -11, 0},
    {414, 16, -29, 0, 126, 146, 22, -34, 9},
    {417, -34, 48, 157, 102, -17, -20, 20, 0},
    {417, 20, -20, -17, 102, 157, 48, -34, 0},
    {419, 9, -34, 22, 146, 126, 0, -29, 16},
    {421, -11, -31, 83, 174, 83, -31, -11, 0},
    {422, 16, -29, 0, 126, 146, 22, -34, 9},
    {425, -34, 48, 157, 102, -17, -20, 20, 0},
    {425, 20, -20, -17, 102, 157, 48, -34, 0},
    {427, 9, -34, 22, 146, 126, 0, -29, 16},
    {429, -11, -31, 83, 174, 83, -31, -11, 0},
    {430, 16, -29, 0, 126, 146, 22, -34, 9},
    {433, -34, 48, 157, 102, -17, -20, 20, 0},
    {433, 20, -20, -17, 102, 157, 48, -34, 0},
    {435, 9, -34, 22, 146, 126, 0, -29, 16},
    {437, -11, -31, 83, 174, 83, -31, -11, 0},
    {438, 16, -29, 0, 126, 146, 22, -34, 9},
    {441, -34, 48, 157, 102, -17, -20, 20, 0},
    {441, 20, -20, -17, 102, 157, 48, -34, 0},
    {443, 9, -34, 22, 146, 126, 0, -29, 16},
    {445, -11, -31, 83, 174, 83, -31, -11, 0},
    {446, 16, -29, 0, 126, 146, 22, -34, 9},
    {449, -34, 48, 157, 102, -17, -20, 20, 0},
    {449, 20, -20, -17, 102, 157, 48, -34, 0},
    {451, 9, -34, 22, 146, 126, 0, -29, 16},
    {453, -11, -31, 83, 174, 83, -31, -11, 0},
    {454, 16, -29, 0, 126, 146, 22, -34, 9},
    {457, -34, 48, 157, 102, -17, -20, 20, 0},
    {457, 20, -20, -17, 102, 157, 48, -34, 0},
    {459, 9, -34, 22, 146, 126, 0, -29, 16},
    {461, -11, -31, 83, 174, 83, -31, -11, 0},
    {462, 16, -29, 0, 126, 146, 22, -34, 9},
    {465, -34, 48, 157, 102, -17, -20, 20, 0},
    {465, 20, -20, -17, 102, 157, 48, -34, 0},
    {467, 9, -34, 22, 146, 126, 0, -29, 16},
    {469, -11, -31, 83, 174, 83, -31, -11, 0},
    {470, 16, -29, 0, 126, 146, 22, -34, 9},
    {473, -34, 48, 157, 102, -17, -20, 20, 0},
    {473, 20, -20, -17, 102, 157, 48, -34, 0},
    {475, 9, -34, 22, 146, 126, 0, -29, 16},
    {477, -11, -31, 83, 174, 83, -31, -11, 0},
    {478, 16, -29, 0, 126, 146, 22, -34, 9},
    {481, -34, 48, 157, 102, -17, -20, 20, 0},
    {481, 20, -20, -17, 102, 157, 48, -34, 0},
    {483, 9, -34, 22, 146, 126, 0, -29, 16},
    {485, -11, -31, 83, 174, 83, -31, -11, 0},
    {486, 16, -29, 0, 126, 146, 22, -34, 9},
    {489, -34, 48, 157, 102, -17, -20, 20, 0},
    {489, 20, -20, -17, 102, 157, 48, -34, 0},
    {491, 9, -34, 22, 146, 126, 0, -29, 16},
    {493, -11, -31, 83, 174, 83, -31, -11, 0},
    {494, 16, -29, 0, 126, 146, 22, -34, 9},
    {497, -34, 48, 157, 102, -17, -20, 20, 0},
    {497, 20, -20, -17, 102, 157, 48, -34, 0},
    {499, 9, -34, 22, 146, 126, 0, -29, 16},
    {501, -11, -31, 83, 174, 83, -31, -11, 0},
    {502, 16, -29, 0, 126, 146, 22, -34, 9},
    {505, -34, 48, 157, 102, -17, -20, 20, 0},
    {505, 20, -20, -17, 102, 157, 48, -34, 0},
    {507, 9, -34, 22, 146, 126, 0, -29, 16},
    {509, -11, -31, 83, 174, 83, -31, -11, 0},
    {510, 16, -29, 0, 126, 146, 22, -34, 9},
    {513, -34, 48, 157, 102, -17, -20, 20, 0},
    {513, 20, -20, -17, 102, 157, 48, -34, 0},
    {515, 9, -34, 22, 146, 126, 0, -29, 16},
    {517, -11, -31, 83, 174, 83, -31, -11, 0},
    {518, 16, -29, 0, 126, 146, 22, -34, 9},
    {521, -34, 48, 157, 102, -17, -20, 20, 0},
    {521, 20, -20, -17, 102, 157, 48, -34, 0},
    {523, 9, -34, 22, 146, 126, 0, -29, 16},
    {525, -11, -31, 83, 174, 83, -31, -11, 0},
    {526, 16, -29, 0, 126, 146, 22, -34, 9},
    {529, -34, 48, 157, 102, -17, -20, 20, 0},
    {529, 20, -20, -17, 102, 157, 48, -34, 0},
    {531, 9, -34, 22, 146, 126, 0, -29, 16},
    {533, -11, -31, 83, 174, 83, -31, -11, 0},
    {534, 16, -29, 0, 126, 146, 22, -34, 9},
    {537, -34, 48, 157, 102, -17, -20, 20, 0},
    {537, 20, -20, -17, 102, 157, 48, -34, 0},
    {539, 9, -34, 22, 146, 126, 0, -29, 16},
    {541, -11, -31, 83, 174, 83, -31, -11, 0},
    {542, 16, -29, 0, 126, 146, 22, -34, 9},
    {545, -34, 48, 157, 102, -17, -20, 20, 0},
    {545, 20, -20, -17, 102, 157, 48, -34, 0},
    {547, 9, -34, 22, 146, 126, 0, -29, 16},
    {549, -11, -31, 83, 174, 83, -31, -11, 0},
    {550, 16, -29, 0, 126, 146, 22, -34, 9},
    {553, -34, 48, 157, 102, -17, -20, 20, 0},
    {553, 20, -20, -17, 102, 157, 48, -34, 0},
    {555, 9, -34, 22, 146, 126, 0, -29, 16},
    {557, -11, -31, 83, 174, 83, -31, -11, 0},
    {558, 16, -29, 0, 126, 146, 22, -34, 9},
    {561, -34, 48, 157, 102, -17, -20, 20, 0},
    {561, 20, -20, -17, 102, 157, 48, -34, 0},
    {563, 9, -34, 22, 146, 126, 0, -29, 16},
    {565, -11, -31, 83, 174, 83, -31, -11, 0},
    {566, 16, -29, 0, 126, 146, 22, -34, 9},
    {569, -34, 48, 157, 102, -17, -20, 20, 0},
    {569, 20, -20, -17, 102, 157, 48, -34, 0},
    {571, 9, -34, 22, 146, 126, 0, -29, 16},
    {573, -11, -31, 83, 174, 83, -31, -11, 0},
    {574, 16, -29, 0, 126, 146, 22, -34, 9},
    {577, -34, 48, 157, 102, -17, -20, 20, 0},
    {577, 20, -20, -17, 102, 157, 48, -34, 0},
    {579, 9, -34, 22, 146, 126, 0, -29, 16},
    {581, -11, -31, 83, 174, 83, -31, -11, 0},
    {582, 16, -29, 0, 126, 146, 22, -34, 9},
    {585, -34, 48, 157, 102, -17, -20, 20, 0},
    {585, 20, -20, -17, 102, 157, 48, -34, 0},
    {587, 9, -34, 22, 146, 126, 0, -29, 16},
    {589, -11, -31, 83, 174, 83, -31, -11, 0},
    {590, 16, -29, 0, 126, 146, 22, -34, 9},
    {593, -34, 48, 157, 102, -17, -20, 20, 0},
    {593, 20, -20, -17, 102, 157, 48, -34, 0},
    {595, 9, -34, 22, 146, 126, 0, -29, 16},
    {597, -11, -31, 83, 174, 83, -31, -11, 0},
    {598, 16, -29, 0, 126, 146, 22, -34, 9},
    {601, -34, 48, 157, 102, -17, -20, 20, 0},
    {601, 20, -20, -17, 102, 157, 48, -34, 0},
    {603, 9, -34, 22, 146, 126, 0, -29, 16},
    {605, -11, -31, 83, 174, 83, -31, -11, 0},
    {606, 16, -29, 0, 126, 146, 22, -34, 9},
    {609, -34, 48, 157, 102, -17, -20, 20, 0},
    {609, 20, -20, -17, 102, 157, 48, -34, 0},
    {611, 9, -34, 22, 146, 126, 0, -29, 16},
    {613, -11, -31, 83, 174, 83, -31, -11, 0},
    {614, 16, -29, 0, 126, 146, 22, -34, 9},
    {617, -34, 48, 157, 102, -17, -20, 20, 0},
    {617, 20, -20, -17, 102, 157, 48, -34, 0},
    {619, 9, -34, 22, 146, 126, 0, -29, 16},
    {621, -11, -31, 83, 174, 83, -31, -11, 0},
    {622, 16, -29, 0, 126, 146, 22, -34, 9},
    {625, -34, 48, 157, 102, -17, -20, 20, 0},
    {625, 20, -20, -17, 102, 157, 48, -34, 0},
    {627, 9, -34, 22, 146, 126, 0, -29, 16},
    {629, -11, -31, 83, 174, 83, -31, -11, 0},
    {630, 16, -29, 0, 126, 146, 22, -34, 9},
    {633, -34, 48, 157, 102, -17, -20, 20, 0},
    {633, 20, -20, -17, 102, 157, 48, -34, 0},
    {635, 9, -34, 22, 146, 126, 0, -29, 16},
    {637, -11, -31, 83, 174, 83, -31, -11, 0},
    {638, 16, -29, 0, 126, 146, 22, -34, 9},
    {641, -34, 48, 157, 102, -17, -20, 20, 0},
    {641, 20, -20, -17, 102, 157, 48, -34, 0},
    {643, 9, -34, 22, 146, 126, 0, -29, 16},
    {645, -11, -31, 83, 174, 83, -31, -11, 0},
    {646, 16, -29, 0, 126, 146, 22, -34, 9},
    {649, -34, 48, 157, 102, -17, -20, 20, 0},
    {649, 20, -20, -17, 102, 157, 48, -34, 0},
    {651, 9, -34, 22, 146, 126, 0, -29, 16},
    {653, -11, -31, 83, 174, 83, -31, -11, 0},
    {654, 16, -29, 0, 126, 146, 22, -34, 9},
    {657, -34, 48, 157, 102, -17, -20, 20, 0},
    {657, 20, -20, -17, 102, 157, 48, -34, 0},
    {659, 9, -34, 22, 146, 126, 0, -29, 16},
    {661, -11, -31, 83, 174, 83, -31, -11, 0},
    {662, 16, -29, 0, 126, 146, 22, -34, 9},
    {665, -34, 48, 157, 102, -17, -20, 20, 0},
    {665, 20, -20, -17, 102, 157, 48, -34, 0},
    {667, 9, -34, 22, 146, 126, 0, -29, 16},
    {669, -11, -31, 83, 174, 83, -31, -11, 0},
    {670, 16, -29, 0, 126, 146, 22, -34, 9},
    {673, -34, 48, 157, 102, -17, -20, 20, 0},
    {673, 20, -20, -17, 102, 157, 48, -34, 0},
    {675, 9, -34, 22, 146, 126, 0, -29, 16},
    {677, -11, -31, 83, 174, 83, -31, -11, 0},
    {678, 16, -29, 0, 126, 146, 22, -34, 9},
    {681, -34, 48, 157, 102, -17, -20, 20, 0},
    {681, 20, -20, -17, 102, 157, 48, -34, 0},
    {683, 9, -34, 22, 146, 126, 0, -29, 16},
    {685, -11, -31, 83, 174, 83, -31, -11, 0},
    {686, 16, -29, 0, 126, 146, 22, -34, 9},
    {689, -34, 48, 157, 102, -17, -20, 20, 0},
    {689, 20, -20, -17, 102, 157, 48, -34, 0},
    {691, 9, -34, 22, 146, 126, 0, -29, 16},
    {693, -11, -31, 83, 174, 83, -31, -11, 0},
    {694, 16, -29, 0, 126, 146, 22, -34, 9},
    {697, -34, 48, 157, 102, -17, -20, 20, 0},
    {697, 20, -20, -17, 102, 157, 48, -34, 0},
    {699, 9, -34, 22, 146, 126, 0, -29, 16},
    {701, -11, -31, 83, 174, 83, -31, -11, 0},
    {702, 16, -29, 0, 126, 146, 22, -34, 9},
    {705, -34, 48, 157, 102, -17, -20, 20, 0},
    {705, 20, -20, -17, 102, 157, 48, -34, 0},
    {707, 9, -34, 22, 146, 126, 0, -29, 16},
    {709, -11, -31, 83, 174, 83, -31, -11, 0},
    {710, 16, -29, 0, 126, 146, 22, -34, 9},
    {713, -34, 48, 157, 102, -17, -20, 20, 0},
    {713, 20, -20, -17, 102, 157, 48, -34, 0},
    {715, 9, -34, 22, 146, 126, 0, -29, 16},
    {717, -11, -31, 83, 174, 83, -31, -11, 0},
    {718, 16, -29, 0, 126, 146, 22, -34, 9},
    {721, -34, 48, 157, 102, -17, -20, 20, 0},
    {721, 20, -20, -17, 102, 157, 48, -34, 0},
    {723, 9, -34, 22, 146, 126, 0, -29, 16},
    {725, -11, -31, 83, 174, 83, -31, -11, 0},
    {726, 16, -29, 0, 126, 146, 22, -34, 9},
    {729, -34, 48, 157, 102, -17, -20, 20, 0},
    {729, 20, -20, -17, 102, 157, 48, -34, 0},
    {731, 9, -34, 22, 146, 126, 0, -29, 16},
    {733, -11, -31, 83, 174, 83, -31, -11, 0},
    {734, 16, -29, 0, 126, 146, 22, -34, 9},
    {737, -34, 48, 157, 102, -17, -20, 20, 0},
    {737, 20, -20, -17, 102, 157, 48, -34, 0},
    {739, 9, -34, 22, 146, 126, 0, -29, 16},
    {741, -11, -31, 83, 174, 83, -31, -11, 0},
    {742, 16, -29, 0, 126, 146, 22, -34, 9},
    {745, -34, 48, 157, 102, -17, -20, 20, 0},
    {745, 20, -20, -17, 102, 157, 48, -34, 0},
    {747, 9, -34, 22, 146, 126, 0, -29, 16},
    {749, -11, -31, 83, 174, 83, -31, -11, 0},
    {750, 16, -29, 0, 126, 146, 22, -34, 9},
    {753, -34, 48, 157, 102, -17, -20, 20, 0},
    {753, 20, -20, -17, 102, 157, 48, -34, 0},
    {755, 9, -34, 22, 146, 126, 0, -29, 16},
    {757, -11, -31, 83, 174, 83, -31, -11, 0},
    {758, 16, -29, 0, 126, 146, 22, -34, 9},
    {761, -34, 48, 157, 102, -17, -20, 20, 0},
    {761, 20, -20, -17, 102, 157, 48, -34, 0},
    {763, 9, -34, 22, 146, 126, 0, -29, 16},
    {765, -11, -31, 83, 174, 83, -31, -11, 0},
    {766, 16, -29, 0, 126, 146, 22, -34, 9},
    {769, -34, 48, 157, 102, -17, -20, 20, 0},
    {769, 20, -20, -17, 102, 157, 48, -34, 0},
    {771, 9, -34, 22, 146, 126, 0, -29, 16},
    {773, -11, -31, 83, 174, 83, -31, -11, 0},
    {774, 16, -29, 0, 126, 146, 22, -34, 9},
    {777, -34, 48, 157, 102, -17, -20, 20, 0},
    {777, 20, -20, -17, 102, 157, 48, -34, 0},
    {779, 9, -34, 22, 146, 126, 0, -29, 16},
    {781, -11, -31, 83, 174, 83, -31, -11, 0},
    {782, 16, -29, 0, 126, 146, 22, -34, 9},
    {785, -34, 48, 157, 102, -17, -20, 20, 0},
    {785, 20, -20, -17, 102, 157, 48, -34, 0},
    {787, 9, -34, 22, 146, 126, 0, -29, 16},
    {789, -11, -31, 83, 174, 83, -31, -11, 0},
    {790, 16, -29, 0, 126, 146, 22, -34, 9},
    {793, -34, 48, 157, 102, -17, -20, 20, 0},
    {793, 20, -20, -17, 102, 157, 48, -34, 0},
    {795, 9, -34, 22, 146, 126, 0, -29, 16},
    {797, -11, -31, 83, 174, 83, -31, -11, 0},
    {798, 16, -29, 0, 126, 146, 22, -34, 9},
    {801, -34, 48, 157, 102, -17, -20, 20, 0},
    {801, 20, -20, -17, 102, 157, 48, -34, 0},
    {803, 9, -34, 22, 146, 126, 0, -29, 16},
    {805, -11, -31, 83, 174, 83, -31, -11, 0},
    {806, 16, -29, 0, 126, 146, 22, -34, 9},
    {809, -34, 48, 157, 102, -17, -20, 20, 0},
    {809, 20, -20, -17, 102, 157, 48, -34, 0},
    {811, 9, -34, 22, 146, 126, 0, -29, 16},
    {813, -11, -31, 83, 174, 83, -31, -11, 0},
    {814, 16, -29, 0, 126, 146, 22, -34, 9},
    {817, -34, 48, 157, 102, -17, -20, 20, 0},
    {817, 20, -20, -17, 102, 157, 48, -34, 0},
    {819, 9, -34, 22, 146, 126, 0, -29, 16},
    {821, -11, -31, 83, 174, 83, -31, -11, 0},
    {822, 16, -29, 0, 126, 146, 22, -34, 9},
    {825, -34, 48, 157, 102, -17, -20, 20, 0},
    {825, 20, -20, -17, 102, 157, 48, -34, 0},
    {827, 9, -34, 22, 146, 126, 0, -29, 16},
    {829, -11, -31, 83, 174, 83, -31, -11, 0},
    {830, 16, -29, 0, 126, 146, 22, -34, 9},
    {833, -34, 48, 157, 102, -17, -20, 20, 0},
    {833, 20, -20, -17, 102, 157, 48, -34, 0},
    {835, 9, -34, 22, 146, 126, 0, -29, 16},
    {837, -11, -31, 83, 174, 83, -31, -11, 0},
    {838, 16, -29, 0, 126, 146, 22, -34, 9},
    {841, -34, 48, 157, 102, -17, -20, 20, 0},
    {841, 20, -20, -17, 102, 157, 48, -34, 0},
    {843, 9, -34, 22, 146, 126, 0, -29, 16},
    {845, -11, -31, 83, 174, 83, -31, -11, 0},
    {846, 16, -29, 0, 126, 146, 22, -34, 9},
    {849, -34, 48, 157, 102, -17, -20, 20, 0},
    {849, 20, -20, -17, 102, 157, 48, -34, 0},
    {851, 9, -34, 22, 146, 126, 0, -29, 16},
    {853, -11, -31, 83, 174, 83, -31, -11, 0},
    {854, 16, -29, 0, 126, 146, 22, -34, 9},
    {857, -34, 48, 157, 102, -17, -20, 20, 0},
    {857, 20, -20, -17, 102, 157, 48, -34, 0},
    {859, 9, -34, 22, 146, 126, 0, -29, 16},
    {861, -11, -31, 83, 174, 83, -31, -11, 0},
    {862, 16, -29, 0, 126, 146, 22, -34, 9},
    {865, -34, 48, 157, 102, -17, -20, 20, 0},
    {865, 20, -20, -17, 102, 157, 48, -34, 0},
    {867, 9, -34, 22, 146, 126, 0, -29, 16},
    {869, -11, -31, 83, 174, 83, -31, -11, 0},
    {870, 16, -29, 0, 126, 146, 22, -34, 9},
    {873, -34, 48, 157, 102, -17, -20, 20, 0},
    {873, 20, -20, -17, 102, 157, 48, -34, 0},
    {875, 9, -34, 22, 146, 126, 0, -29, 16},
    {877, -11, -31, 83, 174, 83, -31, -11, 0},
    {878, 16, -29, 0, 126, 146, 22, -34, 9},
    {881, -34, 48, 157, 102, -17, -20, 20, 0},
    {881, 20, -20, -17, 102, 157, 48, -34, 0},
    {883, 9, -34, 22, 146, 126, 0, -29, 16},
    {885, -11, -31, 83, 174, 83, -31, -11, 0},
    {886, 16, -29, 0, 126, 146, 22, -34, 9},
    {889, -34, 48, 157, 102, -17, -20, 20, 0},
    {889, 20, -20, -17, 102, 157, 48, -34, 0},
    {891, 9, -34, 22, 146, 126, 0, -29, 16},
    {893, -11, -31, 83, 174, 83, -31, -11, 0},
    {894, 16, -29, 0, 126, 146, 22, -34, 9},
    {897, -34, 48, 157, 102, -17, -20, 20, 0},
    {897, 20, -20, -17, 102, 157, 48, -34, 0},
    {899, 9, -34, 22, 146, 126, 0, -29, 16},
    {901, -11, -31, 83, 174, 83, -31, -11, 0},
    {902, 16, -29, 0, 126, 146, 22, -34, 9},
    {905, -34, 48, 157, 102, -17, -20, 20, 0},
    {905, 20, -20, -17, 102, 157, 48, -34, 0},
    {907, 9, -34, 22, 146, 126, 0, -29, 16},
    {909, -11, -31, 83, 174, 83, -31, -11, 0},
    {910, 16, -29, 0, 126, 146, 22, -34, 9},
    {913, -34, 48, 157, 102, -17, -20, 20, 0},
    {913, 20, -20, -17, 102, 157, 48, -34, 0},
    {915, 9, -34, 22, 146, 126, 0, -29, 16},
    {917, -11, -31, 83, 174, 83, -31, -11, 0},
    {918, 16, -29, 0, 126, 146, 22, -34, 9},
    {921, -34, 48, 157, 102, -17, -20, 20, 0},
    {921, 20, -20, -17, 102, 157, 48, -34, 0},
    {923, 9, -34, 22, 146, 126, 0, -29, 16},
    {925, -11, -31, 83, 174, 83, -31, -11, 0},
    {926, 16, -29, 0, 126, 146, 22, -34, 9},
    {929, -34, 48, 157, 102, -17, -20, 20, 0},
    {929, 20, -20, -17, 102, 157, 48, -34, 0},
    {931, 9, -34, 22, 146, 126, 0, -29, 16},
    {933, -11, -31, 83, 174, 83, -31, -11, 0},
    {934, 16, -29, 0, 126, 146, 22, -34, 9},
    {937, -34, 48, 157, 102, -17, -20, 20, 0},
    {937, 20, -20, -17, 102, 157, 48, -34, 0},
    {939, 9, -34, 22, 146, 126, 0, -29, 16},
    {941, -11, -31, 83, 174, 83, -31, -11, 0},
    {942, 16, -29, 0, 126, 146, 22, -34, 9},
    {945, -34, 48, 157, 102, -17, -20, 20, 0},
    {945, 20, -20, -17, 102, 157, 48, -34, 0},
    {947, 9, -34, 22, 146, 126, 0, -29, 16},
    {949, -11, -31, 83, 174, 83, -31, -11, 0},
    {950, 16, -29, 0, 126, 146, 22, -34, 9},
    {953, -34, 48, 157, 102, -17, -20, 20, 0},
    {953, 20, -20, -17, 102, 157, 48, -34, 0},
    {955, 9, -34, 22, 146, 126, 0, -29, 16},
    {957, -11, -31, 83, 174, 83, -31, -11, 0},
    {958, 16, -29, 0, 126, 146, 22, -34, 9},
    {961, -34, 48, 157, 102, -17, -20, 20, 0},
    {961, 20, -20, -17, 102, 157, 48, -34, 0},
    {963, 9, -34, 22, 146, 126, 0, -29, 16},
    {965, -11, -31, 83, 174, 83, -31, -11, 0},
    {966, 16, -29, 0, 126, 146, 22, -34, 9},
    {969, -34, 48, 157, 102, -17, -20, 20, 0},
    {969, 20, -20, -17, 102, 157, 48, -34, 0},
    {971, 9, -34, 22, 146, 126, 0, -29, 16},
    {973, -11, -31, 83, 174, 83, -31, -11, 0},
    {974, 16, -29, 0, 126, 146, 22, -34, 9},
    {977, -34, 48, 157, 102, -17, -20, 20, 0},
    {977, 20, -20, -17, 102, 157, 48, -34, 0},
    {979, 9, -34, 22, 146, 126, 0, -29, 16},
    {981, -11, -31, 83, 174, 83, -31, -11, 0},
    {982, 16, -29, 0, 126, 146, 22, -34, 9},
    {985, -34, 48, 157, 102, -17, -20, 20, 0},
    {985, 20, -20, -17, 102, 157, 48, -34, 0},
    {987, 9, -34, 22, 146, 126, 0, -29, 16},
    {989, -11, -31, 83, 174, 83, -31, -11, 0},
    {990, 16, -29, 0, 126, 146, 22, -34, 9},
    {993, -34, 48, 157, 102, -17, -20, 20, 0},
    {993, 20, -20, -17, 102, 157, 48, -34, 0},
    {995, 9, -34, 22, 146, 126, 0, -29, 16},
    {997, -11, -31, 83, 174, 83, -31, -11, 0},
    {998, 16, -29, 0, 126, 146, 22, -34, 9},
    {1001, -34, 48, 157, 102, -17, -20, 20, 0},
    {1001, 20, -20, -17, 102, 157, 48, -34, 0},
    {1003, 9, -34, 22, 146, 126, 0, -29, 16},
    {1005, -11, -31, 83, 174, 83, -31, -11, 0},
    {1006, 16, -29, 0, 126, 146, 22, -34, 9},
    {1009, -34, 48, 157, 102, -17, -20, 20, 0},
    {1009, 20, -20, -17, 102, 157, 48, -34, 0},
    {1011, 9, -34, 22, 146, 126, 0, -29, 16},
    {1013, -11, -31, 83, 174, 83, -31, -11, 0},
    {1014, 16, -29, 0, 126, 146, 22, -34, 9},
    {1017, -34, 48, 157, 102, -17, -20, 20, 0},
    {1017, 20, -20, -17, 102, 157, 48, -34, 0},
    {1019, 9, -34, 38, 115, 128, 0, 0, 0}
  };
