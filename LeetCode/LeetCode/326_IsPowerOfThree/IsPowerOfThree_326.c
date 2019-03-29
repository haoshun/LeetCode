//
//  IsPowerOfThree_326.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/28.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "IsPowerOfThree_326.h"

//法一 由于求2的幂 方法太过精妙 再加上题目描述说能不能不用循环来解 于是开始思考方法 列出数字的2进制表示 找规律。。。。。。 过了一个小时没找出来 后来查看答案 发现这个方法 在32位整数范围内 最大的3的幂数为1162261467 嗯绝对记不住 这是3的19次幂  这样能符合不用循环的要求
bool isPowerOfThree(int n) {
    return n >0 && 1162261467 % n == 0;
}



//法二 换底公式
// bool isPowerOfThree(int n){
//     return (n > 0 && int(log10(n) / log10(3)) - log10(n) / log10(3) == 0);
// }


