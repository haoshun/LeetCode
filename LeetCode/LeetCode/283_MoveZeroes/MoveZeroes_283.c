//
//  MoveZeroes_283.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "MoveZeroes_283.h"

void moveZeroes(int* nums, int numsSize) {
    if(!nums || numsSize == 0)
        return;
    for(int i = 0  , j = 0; i < numsSize; ++i)
    {
        if(nums[i] != 0)
        {
            nums[j++] = nums[i];
        }
        if(i == numsSize-1)
        {
            while(j<numsSize)
            {
                nums[j++] = 0;
            }
        }
    }
}

