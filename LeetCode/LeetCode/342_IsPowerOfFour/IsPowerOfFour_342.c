//
//  IsPowerOfFour_342.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/28.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "IsPowerOfFour_342.h"

//法一 先筛选出是否是2的幂 如果减1后能被3整除 则为4的幂
// bool isPowerOfFour(int num) {
//     if(num <= 0)
//         return false;
//     if((num & (num-1)) == 0 && (num-1) % 3 == 0)
//         return true;
//     return false;
// }


//法二 先筛选出是否是2的幂 如果为4的幂数 二进制1在奇数位 通过掩码0x55555555 -> 0b1010101010101010101010101010101 筛选
bool isPowerOfFour(int num) {
    if(num <= 0)
        return false;
    if((num & (num-1)) == 0 && (num & 0x55555555) == num)
        return true;
    return false;
}

