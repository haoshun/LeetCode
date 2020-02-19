//
//  LongestCommonPrefix.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/10/14.
//  Copyright © 2018年 Shun. All rights reserved.
//

#include "LongestCommonPrefix.h"

char* longestCommonPrefix(char** strs, int strsSize)
{
    if(strsSize ==1)
    {
        return strs[0];
    }
    int i = 0; //公共前缀长
    char temp ;
    if(strs)
    {
        for (int  j = 0 ; j < strsSize ;)
        {
            if(strs[j][i] && i < strlen(strs[j]))
            {
                if(j == 0)
                {
                    temp = strs[0][i];
                }
                else
                {
                    if(temp != strs[j][i])
                    {
                        break;
                    }
                }
                if (j == strsSize-1)
                {
                    j = 0;
                    ++i;
                }
                else
                {
                    ++j;
                }
            }
            else
            {
                break;
            }
        }
    }
    char * result;
    if (i == 0 )
    {
        result =  (char*) malloc(1*sizeof(char));
        strcpy(result , "");
    }
    else
    {
        result =  (char*) malloc((i+1)*sizeof(char));
        strncpy(result , strs[0] , i);
        result[i] = '\0';
    }
    return result;
}

