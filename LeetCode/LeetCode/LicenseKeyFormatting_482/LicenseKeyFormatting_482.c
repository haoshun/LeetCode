//
//  LicenseKeyFormatting.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/27.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "LicenseKeyFormatting_482.h"
char upperLetter(char t)
{
    if (t>='a' &&t<='z')
    {
        return t-32;
    }
    return t;
}



char* licenseKeyFormatting(char* S, int K)
{
    int s_len = strlen(S) , index = 0;
    char * new_S = (char *) malloc((2*s_len) *sizeof(char));
    int i = s_len-1 , count = 0;
    while (i>=0)
    {
        if (S[i] =='-')
        {
            --i;
        }
        else
        {
            if (count == K)
            {
                new_S[index++] = '-';
                count =0;
            }
            new_S[index++] = upperLetter(S[i--]);
            count++;
        }
        if (i < 0)
        {
            new_S[index] ='\0';
        }
    }
    
    int from = 0 , to = strlen(new_S)-1; //注意长度为0的字符串 不能用无符号整形
    while (from < to)
    {
        char temp = new_S[from];
        new_S[from++] = new_S[to];
        new_S[to--] =temp;
    }
    return new_S;
}


