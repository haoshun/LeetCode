//
//  FindPairs_532.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/12/11.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "FindPairs_532.h"

int f_max(int i , int j)
{
    if (i>j)
        return i;
    else
        return j;
}

int findPairs(int* nums, int numsSize, int k)
{
    if(!nums || numsSize == 0)
        return 0;
    int count = 0;
    quickSort(nums , 0 , numsSize-1);
    
    for (int i = 0 ,  j = 0; i < numsSize; ++i) {
        j = f_max(j, i + 1);
        while (j < numsSize && (long)nums[j] - nums[i] < k) ++j;
        if (j < numsSize && (long)nums[j] - nums[i] == k) ++count;
        while (i < numsSize - 1 && nums[i] == nums[i + 1]) ++i;
    }
    
//    for(int i = 0 ; i < numsSize-1 ; ++i)
//    {
//        int j = i+1;
//        while(j<numsSize && nums[i] == nums[j])
//        {
//            if(k == 0 && j-i == 1)
//                count++;
//            j++;
//        }
//
//        i = j-1;
//
//        for(int t = i+1 ; t < numsSize; ++t)
//        {
//            while(t+1 < numsSize && nums[t] == nums[t+1])
//                ++t;
//            if((nums[t] - nums[i] == k) && k != 0)
//                count++;
//        }
//    }
    return count;
}

