//
//  ContainsNearbyDuplicate_219.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/27.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "ContainsNearbyDuplicate_219.h"


bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    if(!nums || numsSize < 2 || k == 0)
        return false;
    
    int rk = k >= numsSize ? numsSize - 1 : k;
    
    for(int i = 0 ; i < numsSize - 1 ; ++i)
        for(int j = i+1 ; j <= i+rk && j < numsSize ; ++j)
            if(nums[i] == nums[j])
                return true;
    
    return false;
}
