//
//  StrStr_28.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/10/14.
//  Copyright © 2018年 Shun. All rights reserved.
//

#include "StrStr_28.h"

int strStr(char* haystack, char* needle) {
    if(!needle || !haystack)
        return -1;
    if(strlen(needle) == 0)
        return 0;
    int h_len = strlen(haystack) , n_len = strlen(needle);
    if(h_len < n_len)
        return -1;
    for(int i = 0  ; i<h_len ; ++i)
    {
        if(haystack[i] == needle[0])
        {
            if(n_len == 1)
            {
                return i;
            }
            else
            {
                for(int j = 1 ; j <n_len ; ++j)
                {
                    if(haystack[i+j] != needle[j])
                    {
                        //i+=j;
                        break;
                    }
                    if(j == n_len-1)
                    {
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}



