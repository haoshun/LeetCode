//
//  ClimbStairs_70.c
//  LeetCode
//
//  Created by Shun on 2019/3/22.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "ClimbStairs_70.h"


int climbStairs1(int n) {
    if(n ==1)
        return 1;
    if(n == 2)
        return 2;
    return climbStairs1(n-1) + climbStairs1(n-2);
}

int climbStairs2(int n) {
    if(n ==1)
        return 1;
    if(n == 2)
        return 2;
    int stairsCount[2] ={1,2}  ;
    for (int index = 3 ; index <= n; ++index)
    {
        stairsCount[0] ^= stairsCount[1];
        stairsCount[1] ^= stairsCount[0];
        stairsCount[0] ^= stairsCount[1];
        stairsCount[1] += stairsCount[0];
    }
    return stairsCount[1];
}

