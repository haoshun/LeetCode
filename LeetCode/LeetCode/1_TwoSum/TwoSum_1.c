//
//  TwoSum.c
//  LeetCode
//
//  Created by Shun on 2018/5/6.
//  Copyright © 2018年 Shun. All rights reserved.
//

#include "TwoSum_1.h"

//我的解法
//时间复杂度 O(n^n)

int* twoSum(int* nums, int numsSize, int target)
{
    int i =0,k=0;
    int  * resultP = (int*)malloc(2*sizeof(int));
    //resultP[1] = 0;
    
    for(i=0;i<numsSize;++i)
    {
        for(k = i+1;k<numsSize;++k)
        {
            if((nums[i]+nums[k])==target)
            {
                resultP[0] = i;
                resultP[1] = k;
                return  resultP;
            }
        }
    }
    return resultP;
}

//如何对一个数组进行快速查找一个元素？算法中提供了一种方法——哈希（Hash），即对数组中的每个元素按照某种方法（hash function）计算其“唯一”值id（称为哈希值），存储在新的数组A中（一般称为哈希数组），并且其下标就是这个“唯一”值。那么如果访问A[id]存在，则这个元素存在，否则，原始数组中不存在该元素。由于数组是顺序存储的支持随机访问，所以查找一个元素是否在数组中，只需要O(1)的时间，但是在初始化哈希数组时，需要O(n)的时间和O(n)的空间。对于某些特定应用中，需要快速的时间，而对空间要求不苛刻时，哈希数组是一个非常好的方法。

//时间复杂度O(n) 空间复杂度O(n)
int* twoSumHash(int* nums, int numsSize, int target)
{
    int min = 2147483647;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] < min)
            min = nums[i];
    }
    int max = target - min;
    int len = max - min + 1;   //确定hash长度
    int *table = (int*)malloc(len*sizeof(int));
    int *indice = (int*)malloc(2*sizeof(int));
    for (i = 0; i < len; i++)
    {
        table[i] = -1;         //hash初值
    }
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i]-min < len)
        {
            if (table[target-nums[i]-min] != -1)
            {        //满足相加为target
                indice[0] = table[target-nums[i] - min];
                indice[1] = i;
                return indice;
            }
            table[nums[i]-min] = i;
        }
    }
    free(table);
    return indice;
}


