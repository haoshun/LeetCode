//
//  ReverseStr.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/6.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "ReverseWordsAndReduceSpace_186.h"
#include "Tools.h"


int hasSpace(char *s)
{
    for (int i = 0; i<strlen(s); ++i)
    {
        if (s[i] == ' ')
        {
            return 1;
        }
    }
    return 0;
}

//186. Reverse Words in a String 翻转字符串中的单词
char* reverseWordsAndReduceSpace(char* s)
{
    //removeRedundancySpace(s);
    printf("%lu\n" ,strlen(s));
    RotateString(s, 0, strlen(s)-1);
    if (hasSpace(s))
    {
        reverseWords(s);
    }
    return s;
}

