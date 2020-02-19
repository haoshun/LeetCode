//
//  Reverse_7.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/10/8.
//  Copyright © 2018年 Shun. All rights reserved.
//

#include "Reverse_7.h"

int reverse(int x)
{
    int y = x , z = 0,result = 0,last = 0;
    while (y!=0)
    {
        z = y %10;
        y /=10;
        result = result*10 +z;
        //此处也可以用 (2^31-1)/10 这个魔数判定  即INT_MAX/10
        if (result/10 !=last && last!=0)
        {
            return 0;
        }
        last = result;
    }
    return result;
}

