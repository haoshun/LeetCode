//
//  BackspaceCompare_844.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "BackspaceCompare_844.h"

void removeLetter_844(char* str , int len)
{
    if(!str || len == 0)
        return;
    for(int i = len - 1 , count  = 0 ; i >=0 ; --i)
    {
        if(str[i] == '#')
            count++;
        else
        {
            if(count > 0)
            {
                str[i] = '#';
                count--;
            }
        }
    }
}

bool backspaceCompare_844(char* S, char* T) {
    int s_len = strlen(S) , t_len = strlen(T);
    if(s_len == 0 && t_len == 0)
        return true;
    removeLetter(S,s_len);
    removeLetter(T,t_len);
    for(int i = 0 , j = 0 ; i < s_len && j < t_len ; ++i , ++j)
    {
        while(S[i] == '#' && i < s_len)
            ++i;
        while(T[j] == '#' && j < t_len)
            ++j;
        if(i == s_len && j == t_len)
            break;
        else
        {
            if(i == s_len || j == t_len)
                return false;
            if(S[i] != T[j])
                return false;
        }
    }
    return true;
}

