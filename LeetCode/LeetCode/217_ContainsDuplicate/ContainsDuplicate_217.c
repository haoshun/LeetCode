//
//  ContainsDuplicate_217.c
//  LeetCode
//
//  Created by Shun on 2019/3/27.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "ContainsDuplicate_217.h"

bool containsDuplicate(int* nums, int numsSize) {
    if(!nums || numsSize == 0 || numsSize == 1)
        return false;
    
    int max = nums[0] ,min = nums[0];
    for(int i = 0 ; i < numsSize ; ++i)
    {
        if(max < nums[i])
            max =nums[i];
        if(min > nums[i])
            min = nums[i];
    }
    int tmpSize = max-min+1;
    if(tmpSize == 1)
        return true;
    int * tmp = (int *)malloc(tmpSize*sizeof(int));
    memset(tmp, 0, tmpSize*sizeof(int));
    
    for(int i = 0 ; i < numsSize ; ++i)
    {
        if(tmp[max - nums[i]] > 0)
            return true;
        tmp[max - nums[i]] = 1;
    }
    return false;
}

