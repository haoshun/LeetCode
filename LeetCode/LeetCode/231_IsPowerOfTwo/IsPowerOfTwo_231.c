//
//  IsPowerOfTwo_231.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/27.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "IsPowerOfTwo_231.h"

//法一
// bool isPowerOfTwo(int n) {
//     if(n <= 0)
//         return false;
//     if(n == 1)
//         return true;
//     int tmp = n;
//     while(true)
//     {
//         if(tmp & 0x1)
//             break;
//         tmp >>= 1;
//     }
//     if(tmp == 1)
//         return true;
//     return false;
// }


//法二 其实本质都是位运算 利用2的幂数的2进制性质 但是这个方法更加巧妙
bool isPowerOfTwo(int n)
{
    if(n <= 0)
        return false;
    
    if((n & n-1) == 0)
        return true;
    return false;
}

