//
//  IsHappy_202.c
//  LeetCode
//
//  Created by Shun on 2019/3/21.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "IsHappy_202.h"


bool isHappy(int n) {
    int sum = 0 , num = n , tmp;
    while(num != 4)
    {
        do
        {
            tmp = num%10;
            sum += tmp*tmp;
            num /= 10;
            
        }
        while(num);
        
        if(sum == 1)
            return true;
        else
        {
            num = sum;
            sum = 0;
        }
        
    }
    return false;
}

