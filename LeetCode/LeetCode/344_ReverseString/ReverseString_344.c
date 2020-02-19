//
//  ReverseString_344.c
//  LeetCode
//
//  Created by Shun on 2019/3/21.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "ReverseString_344.h"

char* reverseString(char* s)
{
    long from = 0 , to = strlen(s)-1; //注意长度为0的字符串 不能用无符号整形
    while (from < to)
    {
        char temp = s[from];
        s[from++] = s[to];
        s[to--] =temp;
    }
    return s;
}






