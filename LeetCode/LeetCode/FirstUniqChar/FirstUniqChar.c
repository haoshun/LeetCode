//
//  FirstUniqChar.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/25.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "FirstUniqChar.h"

int firstUniqChar(char* s)
{
    if (!s ||strlen(s) == 0)
    {
        return -1;
    }
    int array[26];//将所有的数都赋值为0；
    memset(array, -1, 26*sizeof(int));
    
//    for (int i = 0 , k =strlen(s)-1 ; i<k; ++i , --k)
//    {
//        int j = s[i]-'a';
//        int l = s[k] - 'a';
//        if (array[j] == -1)
//        {
//            array[j] = i;
//        }
//        else
//        {
//            array[j] = -2;
//        }
//        if (array[l] == -1)
//        {
//            array[l] = k;
//        }
//        else
//        {
//            array[l] = -2;
//        }
//    }
    long length = strlen(s);
    for (int i = 0; i<length; ++i )
    {
        int j = s[i]-'a';
        if (array[j] == -1)
        {
            array[j] = i;
        }
        else
        {
            array[j] = -2;
        }
    }
    int p =strlen(s);
    for (int i = 0; i<26; ++i)
    {
        if (array[i] >=0)
        {
            if (p>array[i])
            {
                p = array[i];
            }
        }
        if (i == 25)
        {
            if (p ==strlen(s))
            {
                return -1;
            }
        }
    }
    return p;
}
