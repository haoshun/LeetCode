
//
//  IsRectangleOverlap_836.c
//  LeetCode
//
//  Created by Shun on 2019/3/26.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "IsRectangleOverlap_836.h"

bool isRectangleOverlap(int* rec1, int rec1Size, int* rec2, int rec2Size) {
    //此为不重叠的条件
    return (rec2[0] >= rec1[2] || rec1[0] >= rec2[2] || rec1[1] >= rec2[3] || rec2[1] >= rec1[3]) ? false : true;
}
