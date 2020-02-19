//
//  MinMoves_453.c
//  LeetCode
//
//  Created by Shun on 2019/4/25.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "MinMoves_453.h"
#include <limits.h>

int min(int mn ,int num)
{
    return mn > num ? num : mn;
}

int minMoves(int* nums, int numsSize) {
    int mn = INT_MAX, res = 0;
    for (int i = 0 ; i < numsSize ; ++i)
        mn = min(mn, nums[i]);
    for (int i = 0 ; i < numsSize ; ++i)
        res += nums[i] - mn;
    return res;
}
