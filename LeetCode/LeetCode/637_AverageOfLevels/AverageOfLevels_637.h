//
//  AverageOfLevels_637.h
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/22.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef AverageOfLevels_637_h
#define AverageOfLevels_637_h

#include <stdio.h>
#include "Defines.h"
#include <stdlib.h>

//637. 二叉树的层平均值
//给定一个非空二叉树, 返回一个由每层节点平均值组成的数组.
//
//示例 1:
//
//输入:
//    3
//   / \
//  9  20
//    /  \
//   15   7
//输出: [3, 14.5, 11]
//解释:
//第0层的平均值是 3,  第1层是 14.5, 第2层是 11. 因此返回 [3, 14.5, 11].
//注意：
//
//节点值的范围在32位有符号整数范围内。

double* averageOfLevels(struct TreeNode* root, int* returnSize);

#endif /* AverageOfLevels_637_h */
