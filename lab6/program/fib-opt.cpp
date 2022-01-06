void fib_opt(short &r0, short &r7)
{
    short fib[] = 
    {
        1, 1, 2, 4, 6, 10, 18, 30, 50, 86,
        146, 246, 418, 710, 178, 1014, 386, 742, 722, 470,
        930, 326, 242, 54, 706, 166, 274, 662, 994, 518, 
        818, 758, 770, 358, 850, 342, 34, 710, 370, 438,
        834, 550, 402, 22, 98, 902, 946, 118, 898, 742, 
        978, 726, 162, 70, 498, 822, 962, 934, 530, 406, 
        226, 262, 50, 502, 2, 102, 82, 86, 290, 454, 
        626, 182, 66, 294, 658, 790, 354, 646, 178, 886, 
        130, 486, 210, 470, 418, 838, 754, 566, 194, 678, 
        786, 150, 482, 6, 306, 246, 258, 870, 338, 854, 
        546, 198, 882, 950, 322, 38, 914, 534, 610, 390, 
        434, 630, 386, 230, 466, 214, 674, 582, 1010, 310, 
        450, 422, 18, 918, 738, 774, 562, 1014, 514, 614, 
        594, 598, 802, 966, 114, 694, 578, 806, 146, 278, 
        866, 134, 690, 374, 642, 998, 722, 982
    };
    short *base = fib + 20;
    r0 -= 20;
    if (r0 >= 0) r0 &= 127;
    r7 = *(base + r0);
}