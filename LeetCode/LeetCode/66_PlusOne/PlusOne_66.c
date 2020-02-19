//
//  PlusOne_66.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/10/18.
//  Copyright © 2018年 Shun. All rights reserved.
//

#include "PlusOne_66.h"

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = 0;
    for(; i<digitsSize ; ++i)
    {
        if(digits[i] != 9)
            break;
    }
    if(i == digitsSize)
    {
        ++i;
    }
    else
    {
        i = digitsSize;
    }
    *returnSize = i;
    int * returnDigits = (int *) malloc((*returnSize)*sizeof(int));
    if((*returnSize)>digitsSize)
    {
        returnDigits[0] = 1;
        for ( i = 1; i<*returnSize ; ++i)
        {
            returnDigits[i] = 0;
        }
    }
    else
    {
        i = digitsSize-1;
        for (int j = 1  ; i >= 0 ; --i)
        {
            if(digits[i] + j == 10)
            {
                returnDigits[i] = 0;
                j = 1;
            }
            else
            {
                returnDigits[i] = digits[i] +j;
                j = 0;
            }
        }
    }
    return returnDigits;
}

