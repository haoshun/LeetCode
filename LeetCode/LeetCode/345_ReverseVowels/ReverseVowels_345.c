//
//  ReverseVowels_345.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/21.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "ReverseVowels_345.h"

//345 反转字符串中的元音字母
int isVowel(char t)
{
    char vowel[10] = "aAeEiIoOuU";
    for (int i = 0; i<10; ++i)
    {
        if (vowel[i]==t)
        {
            return 1;
        }
    }
    return 0;
}

char* reverseVowels(char* s)
{
    long from = 0 , to = strlen(s)-1;
    while (from < to)
    {
        if (!isVowel(s[from]))
        {
            ++from;
            continue;
        }
        if (isVowel(s[to]))
        {
            char t = s[from];
            s[from ++] = s[to];
            s[to--] = t;
        }
        else
        {
            --to;
            continue;
        }
    }
    return s;
}



