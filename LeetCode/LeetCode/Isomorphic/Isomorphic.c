//
//  Isomorphic.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/26.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "Isomorphic.h"

bool isIsomorphic(char* s, char* t)
{
    if (strlen(s) != strlen(t))
    {
        return false;
    }
    int m1[256] = {0}, m2[256] = {0};
    long length = strlen(s);
    for (int i = 0; i<length; ++i)
    {
        if (m1[s[i]] != m2[t[i]])
        {
            return false;
        }
        m1[s[i]] = i+1;
        m2[t[i]] = i+1;
    }
    return true;
}

