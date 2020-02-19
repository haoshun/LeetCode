//
//  QuickSort.c
//  LeetCode
//
//  Created by Shun on 2018/5/7.
//  Copyright © 2018年 Shun. All rights reserved.
//

#include "QuickSort.h"

void quickSort(int* nums,int first,int end)
{
    int temp,l,r;
    if(first>=end)
        return;
    temp=nums[first];
    l=first;
    r=end;
    while(l<r)
    {
        while(l<r && nums[r]>=temp)
            r--;
        if(l<r)
            nums[l]=nums[r];
        while(l<r && nums[l]<=temp)
            l++;
        if(l<r)
            nums[r]=nums[l];
    }
    nums[l]=temp;
    quickSort(nums,first,l-1);
    quickSort(nums,l+1,end);
}

//递归实现
//void quickSort(int* nums,int first,int end)
//{
//    if (!nums )
//        return;
//
//    if(first>=end)
//        return;
//
//
//}

