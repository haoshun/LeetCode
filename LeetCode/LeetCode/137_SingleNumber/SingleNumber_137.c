//
//  SingleNumber_137.c
//  LeetCode
//
//  Created by Shun on 2019/3/27.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "SingleNumber_137.h"

int singleNumberII(int* nums, int numsSize) {
    int result = 0;
    for(int i = 0 ; i<32 ;++i)
    {
        int k = 0;
        for (int j = 0 ; j < numsSize ; ++j)
        {
            k = k+ (1 & (nums[j] >> i));
        }
        result = result | ((k%3) << i);
    }
    return result;
}

