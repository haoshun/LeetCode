//
//  FirstBadVersion_278.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "FirstBadVersion_278.h"
#include <stdbool.h>

//bool isBadVersion(int version);
//
//int firstBadVersion(int n) {
//    if(isBadVersion(1))
//        return 1;
//    int left = 1 , right = n , mid = n/2;
//    while(left<right)
//    {
//        if(isBadVersion(mid))
//        {
//            right = mid;
//        }
//        else
//        {
//            left = mid+1;
//        }
//        mid = (left & right) +((left^right) >>1);
//    }
//    return mid;
//}

