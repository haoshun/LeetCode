//
//  MinMoves2_462.c
//  LeetCode
//
//  Created by Shun on 2019/4/25.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "MinMoves2_462.h"
#include "QuickSort.h"

int minMoves2(int* nums, int numsSize) {
    if(!nums || numsSize == 0)
        return 0;
    quickSort(nums , 0 , numsSize - 1);
    
    int i = 0 , j = numsSize - 1 , count = 0;
    while(i < j)
        count += nums[j--] - nums[i++];
    return count;
}
