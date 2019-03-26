//
//  CompressChars.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/26.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "CompressChars_443.h"

void countToChar(char * chars , int count , int * index_p)
{
    if (count >1)
    {
        char countChar[4] ;
        sprintf(countChar,"%d",count);
        int countCharLen = strlen(countChar);
        for (int j = 0; j<countCharLen; ++j)
        {
            chars[(*index_p)++] = countChar[j];
        }
    }
}
//这里应该可以优化循环遍历的边界条件 暂时不想想了 或者更改遍历条件
int compress(char* chars, int charsSize)
{
    char t = chars[0];
    int count =0  , index = 0;
    for (int i = 0; i<charsSize; ++i)
    {
        if (t == chars[i])
        {
            count ++;
        }
        if (t !=chars[i])
        {
            chars[index++] =t;
            t = chars[i];
            countToChar(chars , count,&index);
            count=1;
        }
        if (i == charsSize-1)
        {
            chars[index++] =t;
            t = chars[i];
            countToChar(chars , count ,&index);
            chars[index] = '\0';
        }
    }
    return index;
}


