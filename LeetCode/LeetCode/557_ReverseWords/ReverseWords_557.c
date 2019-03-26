//
//  ReverseWords_557.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/21.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "ReverseWords_557.h"
#include "Tools.h"

//557. 反转字符串中的单词 III

void removeRedundancySpace(char * s) //移除冗余的 空格
{
    long from = 0 ,index = 0 , length= strlen(s);
    int hasSpace = 0,hasFirstSpace = 0;
    for (; from<length; ++from)
    {
        if (s[from] == ' ')
        {
            if (from == 0)
            {
                hasFirstSpace =1;
            }
            if (!hasSpace)
            {
                hasSpace = 1;
            }
        }
        else
        {
            if (hasSpace)
            {
                if (!hasFirstSpace) {
                    s[index++] = ' ';
                }
            }
            s[index++] = s[from];
            hasSpace = 0;
            hasFirstSpace = 0;
        }
        if (from == length-1)
        {
            s[index] = '\0';
        }
    }
    
}

char* reverseWords(char* s)
{
    //    long from = 0 , current = 0, length = strlen(s);
    //    while (current<=length)
    //    {
    //        if (s[current] == ' ' || current ==length)
    //        {
    //            RotateString(s, from, current-1);
    //            from = current+1;
    //        }
    //        current ++;
    //    }
    //    return s;
    long from = 0 , current = 0, length = strlen(s);
    while (current<length)
    {
        if (s[current] == ' ')
        {
            RotateString(s, from, current-1);
            from = current+1;
        }
        current ++;
        if (current == length-1)
        {
            RotateString(s, from, current);
        }
    }
    return s;
}


