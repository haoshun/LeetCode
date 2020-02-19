//
//  IsPerfectSquare_367.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "IsPerfectSquare_367.h"

bool isPerfectSquare(int num) {
    if(num == 1)
        return 1;
    int left = 0  , right = num;
    while(left<right)
    {
        int mid = left +(right - left)/2;
        if(num / mid >= mid)
        {
            if(num/mid == mid && num%mid == 0)
            {
                return 1;
            }
            left = mid +1;
        }
        else
        {
            right = mid;
        }
    }
    return 0;
}

