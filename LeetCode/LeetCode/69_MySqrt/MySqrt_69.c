//
//  MySqrt_69.c
//  LeetCode
//
//  Created by Shun on 2019/3/26.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "MySqrt_69.h"

//法一
//int mySqrt(int x) {
//    if(x == 0) return 0;
//    if(x == 1) return 1;
//     for(int i = 2; ;++i)
//     {
//         if(x/i>i)
//         {
//
//         }
//         else
//         {
//             if(x/i == i)
//             {
//                 return i;
//             }
//             return i-1;
//         }
//     }
//}

//法二
int mySqrt(int x) {
    if(x == 0) return 0;
    if(x == 1) return 1;
    int left = 0 , right = x;
    while(left<right)
    {
        int mid = left + (right - left)/2;
        if(x/mid >= mid)
        {
            left = mid+1;
        }
        else
            right = mid;
    }
    return right -1;
}

