//
//  LevelOrderBottom_107.h
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/22.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef LevelOrderBottom_107_h
#define LevelOrderBottom_107_h

#include <stdio.h>
#include "Defines.h"
#include "stdlib.h"

//107. 二叉树的层次遍历 II
//给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
//
//例如：
//给定二叉树 [3,9,20,null,null,15,7],
//
//    3
//   / \
//  9  20
//    /  \
//   15   7
//返回其自底向上的层次遍历为：
//
//[
//  [15,7],
//  [9,20],
//  [3]
//]

int** levelOrderBottom(struct TreeNode* root, int* returnSize, int** returnColumnSizes);

#endif /* LevelOrderBottom_107_h */
