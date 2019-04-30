//
//  FindNthDigit_400.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/4/30.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "FindNthDigit_400.h"
#include <limits.h>

int findNthDigit(int n){
    
    int result = -1;
    for(int i = 1 , sep = 0 , sum = 0 , base = 9 , lastSep = 0 ; i < 10 ;++i,sum += base,base *= 10,lastSep = sep)
    {
        if(i == 9)
            sep = INT_MAX;
        else
            sep += base * i;
        if(n <= sep)
        {
            int theNum = (n - lastSep + i - 1) / i + sum;
            int location = (n - lastSep + i - 1) % i;
            for(int j = i-1 , num = 0 ; j >= 0 ; --j)
            {
                num = theNum % 10;
                if(location == j)
                    return num;
                theNum /= 10;
            }
        }
    }
    
    return result;
}

