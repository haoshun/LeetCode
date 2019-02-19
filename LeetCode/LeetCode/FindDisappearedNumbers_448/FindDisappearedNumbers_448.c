//
//  FindDisappearedNumbers_448.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/12/10.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "FindDisappearedNumbers_448.h"

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{
    if(!nums || numsSize == 0 )
        return NULL;
    for(int i = 0 , tmp ; i<numsSize ; ++i)
    {
//        if(nums[i] != i+1)
//        {
//            tmp = nums[i];
//            while(nums[tmp-1] != tmp)
//            {
//                int tmp1  = tmp;
//                tmp = nums[tmp-1];
//                nums[tmp1-1] = tmp1;
//            }
//        }
        int index = abs(nums[i])-1;
        nums[index] =  (nums[index] > 0) ? -nums[index] : nums[index];
    }
    *returnSize = 0 ;
    for(int i = 0 ; i < numsSize ; ++i)
    {
        printf("%d " , nums[i]);
        if(nums[i] != i + 1)
            (*returnSize) ++;
    }
    printf("\n");
    int * returnNums = (int*) malloc(sizeof(int)*(*returnSize));
    for(int i = 0 , j = 0 ; i < numsSize ; ++i)
    {
        if(nums[i] != i + 1)
            returnNums[j++] = i+1;
    }
    return returnNums;
}


