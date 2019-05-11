//
//  Tools.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/21.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "Tools.h"

void RotateString (char * s , int from , int to)
{
    while (from < to)
    {
        char t = s[from];
        s[from ++] = s [to];
        s[to--] = t;
    }
}


//获取较大值
int max (int a , int b)
{
    return a > b ? a : b ;
}

