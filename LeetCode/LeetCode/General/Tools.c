//
//  Tools.c
//  LeetCode
//
//  Created by Shun on 2019/3/21.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "Tools.h"

void RotateString (char * s , int from , int to)
{
    while (from < to)
    {
        char t = s[from];
        s[from ++] = s [to];
        s[to--] = t;
    }
}


//获取较大值
int max (int a , int b)
{
    return a > b ? a : b ;
}

void printArray(int * nums , int arraySize)
{
    for (int i = 0 ; i < arraySize ; ++i)
    {
        printf("%d ," ,nums[i]);
    }
    printf("\n");
}

