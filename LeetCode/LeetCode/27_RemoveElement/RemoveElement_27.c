//
//  RemoveElement_27.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "RemoveElement_27.h"

int removeElement(int* nums, int numsSize, int val) {
    if(!nums || numsSize == 0)
        return 0;
    int head = 0;
    for(int rear = 0 ; rear<numsSize ; ++rear)
    {
        if(nums[rear] != val)
        {
            nums[head++] = nums[rear];
        }
    }
    return head;
}

