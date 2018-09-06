//
//  ReverseStr.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/6.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "ReverseStr.h"

void RotateString (char * s , int from , int to)
{
    
    while (from < to)
    {
        char t = s[from];
        s[from ++] = s [to];
        s[to--] = t;
    }
}

char* reverseStr(char* s, int k)
{
    unsigned long strLength = strlen(s);
    int i = 0;
    do
    {
        if (i +k>strLength)
        {
            RotateString(s, i, strLength-1);
        }
//        else if (i+2*k>strLength)
//        {
//            RotateString(s, i, i+k-1);
//        }
        else
        {
            RotateString(s, i, i+k-1);
        }
        i = i+2*k;
    } while (i<strLength);

    return s;
}


