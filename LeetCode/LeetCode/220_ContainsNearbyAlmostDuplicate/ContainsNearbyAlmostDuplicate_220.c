//
//  ContainsNearbyAlmostDuplicate_220.c
//  LeetCode
//
//  Created by Shun on 2019/3/27.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "ContainsNearbyAlmostDuplicate_220.h"

//这里的感想是 1、大数超过数据类型时的情况 本解决方案只是由于输入的是int型 强制转换为long long 搞定 但是如果输入时long long呢？ 转成double吗 这并不是一个理想的方法
//2、如果还是坚持用纯C 来写 那么还是需要封装一些数据结构的 否则很痛苦
//这个题 以后再改进吧 当前是O(k*n)
bool containsNearbyAlmostDuplicate(int* nums, int numsSize, int k, int t) {
    if(!nums || numsSize < 2 || k == 0)
        return false;
    
    int rk = k >= numsSize ? numsSize - 1 : k;
    
    for(int i = 0 ; i < numsSize - 1 ; ++i)
        for(int j = i+1 ; j <= i+rk && j < numsSize ; ++j)
            if(labs((long long)nums[i] - (long long)nums[j]) <= t)
                return true;
    
    return false;
}

