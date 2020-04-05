//
//  BinaryTreePaths_257.h
//  LeetCode
//
//  Created by 郝 源顺 on 2020/4/4.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef BinaryTreePaths_257_h
#define BinaryTreePaths_257_h

#include <stdio.h>
#include "Defines.h"
#include <stdlib.h>

//257. 二叉树的所有路径
//给定一个二叉树，返回所有从根节点到叶子节点的路径。
//
//说明: 叶子节点是指没有子节点的节点。
//
//示例:
//
//输入:
//
//   1
// /   \
//2     3
// \
//  5
//
//输出: ["1->2->5", "1->3"]


char ** binaryTreePaths(struct TreeNode* root, int* returnSize);

#endif /* BinaryTreePaths_257_h */
