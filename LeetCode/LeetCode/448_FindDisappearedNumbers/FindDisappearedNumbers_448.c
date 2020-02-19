//
//  FindDisappearedNumbers_448.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/12/10.
//  Copyright © 2018年 Shun. All rights reserved.
//

#include "FindDisappearedNumbers_448.h"

// 法1 努力将数组置为1、2、3、4...n 不能符合上述规律的则为未出现的数字
// int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//      if(!nums || numsSize == 0 )
//         return NULL;
//     for(int i = 0 , tmp ; i<numsSize ; ++i)
//     {
//         if(nums[i] != i+1)
//         {
//             tmp = nums[i];
//             while(nums[tmp-1] != tmp)
//             {
//                 int tmp1  = tmp;
//                 tmp = nums[tmp-1];
//                 nums[tmp1-1] = tmp1;
//             }
//         }
//     }
//     *returnSize = 0 ;
//     for(int i = 0 ; i < numsSize ; ++i)
//     {
//         //printf("%d " , nums[i]);
//         if(nums[i] != i + 1)
//             (*returnSize) ++;
//     }
//     //printf("\n");
//     int * returnNums = (int*) malloc(sizeof(int)*(*returnSize));
//     for(int i = 0 , j = 0 ; i < numsSize ; ++i)
//     {
//         if(nums[i] != i + 1)
//             returnNums[j++] = i+1;
//     }
//     return returnNums;
// }

//法2
//将出现了的index置负
// int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//      if(!nums || numsSize == 0 )
//         return NULL;
//     for(int i = 0 ; i<numsSize ; ++i)
//     {
//         int index = abs(nums[i])-1;
//         nums[index] =  (nums[index] > 0) ? -nums[index] : nums[index];
//     }
//     *returnSize = 0 ;
//     for(int i = 0 ; i < numsSize ; ++i)
//     {
//         if(nums[i] > 0)
//             (*returnSize) ++;
//     }
//     int * returnNums = (int*) malloc(sizeof(int)*(*returnSize));
//     for(int i = 0 , j = 0 ; i < numsSize ; ++i)
//     {
//         if(nums[i] > 0 )
//             returnNums[j++] = i+1;
//     }
//     return returnNums;
// }

//法3
//将出现了的数字-1位置上的数+n 注意数组越界问题 最后没有比numsSize大的为未出现数字
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    if(!nums || numsSize == 0 )
        return NULL;
    for(int i = 0 ; i<numsSize ; ++i)
    {
        nums[(nums[i]-1) % numsSize] += numsSize;
    }
    *returnSize = 0 ;
    for(int i = 0 ; i < numsSize ; ++i)
    {
        if(nums[i] <= numsSize)
            (*returnSize) ++;
    }
    int * returnNums = (int*) malloc(sizeof(int)*(*returnSize));
    for(int i = 0 , j = 0 ; i < numsSize ; ++i)
    {
        if(nums[i] <= numsSize)
            returnNums[j++] = i+1;
    }
    return returnNums;
}


