//
//  TitleToNumber_171.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/25.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "TitleToNumber_171.h"

int cardinalNumber1(int n , int cN)
{
    int result = 1;
    while(n)
    {
        result *=cN;
        n--;
    }
    return result;
}

int titleToNumber(char* s) {
    if(!s)
        return 0;
    int s_len = strlen(s) , sum = 0;
    for(int i = 0 ; i < s_len ; ++i)
    {
        sum += (s[i] - 'A' + 1) * cardinalNumber1(s_len-i-1,26);
    }
    return sum;
}


