//
//  TrailingZeroes_172.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/27.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "TrailingZeroes_172.h"

int trailingZeroes(int n) {
    if(n <= 0)
        return 0;
    int sum = 0 , m = 5 ;
    
    for(int i = 1 ; i < 13 ; ++i , m *= 5)
    {
        if(n >= m)
            sum += n / m;
        else
            break;
    }
    if(n >= m)
        sum++;
    return sum;
}

