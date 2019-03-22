//
//  IsPalindrome_125.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/22.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "IsPalindrome_125.h"

void removeOtherChar(char * s)
{
    int len = strlen(s) , i = 0;
    for (int j = 0 ; j < len ; ++j)
    {
        if((s[j] >= 'A' && s[j] <='Z') ||(s[j] >= 'a' && s[j] <= 'z') || (s[j]>='0' && s[j]<='9'))
        {
            s[i] = s[j];
            if(s[i] >= 'A' && s[i] <='Z')
            {
                s[i] += 32;
            }
            ++i;
        }
    }
    s[i] = '\0';
}

bool isPalindrome_125(char* s) {
    if(!s)
        return false;
    if(!strlen(s))
        return true;
    removeOtherChar(s);
    int len = strlen(s);
    for(int i = 0 ; i<len/2 ; ++i)
    {
        if(s[i] != s[len-i-1])
            return false;
    }
    return true;
}


