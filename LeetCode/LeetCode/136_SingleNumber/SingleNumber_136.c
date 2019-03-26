//
//  SingleNumber_136.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "SingleNumber_136.h"

int singleNumber(int* nums, int numsSize) {
    int result;
    for(int i = 0 ; i < numsSize ; ++i)
    {
        result ^= nums[i];
    }
    return result;
}

