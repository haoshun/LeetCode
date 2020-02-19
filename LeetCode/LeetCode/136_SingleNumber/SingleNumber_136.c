//
//  SingleNumber_136.c
//  LeetCode
//
//  Created by Shun on 2019/3/26.
//  Copyright © 2019 Shun. All rights reserved.
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

