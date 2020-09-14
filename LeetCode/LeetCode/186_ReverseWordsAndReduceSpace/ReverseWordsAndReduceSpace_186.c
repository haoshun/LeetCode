//
//  ReverseStr.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/6.
//  Copyright © 2018年 Shun. All rights reserved.
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

void replaceString (char * s , int from , int to , int* index)
{
    for(int i = from ; i <= to ; ++i , ++(*index))
        s[*index] = s[i];
}

char * reverseWords_151(char * s){
    if(s)
    {
        int len = strlen(s), from = len, to = len, index = 0;
        //int end = len - 1;
        for(int i = 0 ; i < len; ++i)
        {
            if(s[i] != ' ')
            {
                if(i < from)
                {
                    from = i;
                }
                to = i;
            }
            if (s[i] == ' ' ||  i == len - 1) {
                if(from <= to && from != len)
                {
                    if (index) {
                        s[index++] = ' ';
                    }
                    RotateString(s,from,to);
                    replaceString(s,from,to,&index);
                    from = to = len;
                }
            }
        }
        s[index] = '\0';
        RotateString(s,0,index-1);
        //len = strlen(s);
    }
    return s;
}
