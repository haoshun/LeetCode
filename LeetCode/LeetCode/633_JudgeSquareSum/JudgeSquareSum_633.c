//
//  JudgeSquareSum_633.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "JudgeSquareSum_633.h"

bool isPerfectSquare_633(int num) {
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
bool judgeSquareSum(int c) {
    if(c == 0 || c == 1 ||c == 2)
        return 1;
    int left = 0 , right = c ;
    while(left <right)
    {
        int mid = left + (right-left)/2;
        if(c / mid >=mid)
        {
            if(c/mid == mid && c%mid == 0)
                return 1;
            left = mid +1;
        }
        else
        {
            right = mid;
        }
    }
    for(int i = 1 ; i < right ; ++i)
    {
        int temp = c - i*i;
        if(isPerfectSquare_633(temp))
        {
            return 1;
        }
    }
    return 0;
}


