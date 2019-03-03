//
//  RemoveDuplicatesfromSortedArrayII_80.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/3.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "RemoveDuplicatesfromSortedArrayII_80.h"

int removeDuplicates(int* nums, int numsSize) {
    if(!nums || numsSize == 0)
        return 0;
    int count = 0;
    for(int fast = 0 , slow = 0 ; fast < numsSize ; ++fast)
    {
        if(nums[fast] != nums[slow])
        {
            if(fast -slow > 1)
                nums[count++]  = nums[slow];
            nums[count++] = nums[slow];
            slow = fast;
        }
        if(fast == numsSize - 1)
        {
            if(fast - slow > 0)
                nums[count++] = nums[slow];
            nums[count++] = nums[slow];
        }
    }
    return count;
}

