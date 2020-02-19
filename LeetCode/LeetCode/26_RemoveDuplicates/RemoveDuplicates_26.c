//
//  RemoveDuplicates_26.c
//  LeetCode
//
//  Created by Shun on 2019/3/22.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "RemoveDuplicates_26.h"

int removeDuplicates_26(int* nums, int numsSize) {
    if(!nums || numsSize == 0)
        return 0;
    if(numsSize == 1)
        return 1;
    int head = 1 ;
    for(int rear = 1 ,temp = nums[0] ; rear <numsSize ; ++rear)
    {
        if(nums[rear] != temp)
        {
            nums[head++] = nums[rear];
            temp = nums[rear];
        }
    }
    return head;
}


