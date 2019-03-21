//
//  SearchInsert.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/10/10.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "SearchInsert_35.h"

//O(n)
//int searchInsert(int* nums, int numsSize, int target)
//{
//    for(int i = 0 ; i<numsSize ; ++i)
//    {
//        if(nums[i] >= target)
//        {
//            return i;
//        }
//    }
//    return numsSize;
//}

//折半（二分查找）log（n）
int searchInsert(int* nums, int numsSize, int target)
{
    int left = 0, right = numsSize-1 , middle =  numsSize/2;
    
    if (nums[right] <target) {
        return numsSize;
    }
    
    if (nums[left] >target)
    {
        return 0;
    }
    
    while (left<right)
    {
        if (nums[middle] == target)
        {
            return middle;
        }
        else if (nums[middle] >target)
        {
            right = middle;
        }
        else
        {
            left = middle+1;
        }
        
        middle = left+ (right-left)/2 ;
    }
    
    return middle;
}

