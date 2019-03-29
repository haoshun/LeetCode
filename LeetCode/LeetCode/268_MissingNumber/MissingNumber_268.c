//
//  MissingNumber_268.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/28.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "MissingNumber_268.h"

//法一
//int missingNumber(int* nums, int numsSize) {
//    int result = 0 , i;
//    for( i = 0 ;  i < numsSize ; ++i)
//     {
//         result = result -nums[i] +i;
//     }
//     return result +i;
//}

//法二
int missingNumber(int* nums, int numsSize) {
    int result = 0 , i;
    //更好的方法
    for( i = 0 ; i < numsSize ; ++i)
    {
        result = result ^(i+1)^nums[i];
    }
    return result;
}


