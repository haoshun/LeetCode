//
//  IsBalanced_110.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/24.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef IsBalanced_110_h
#define IsBalanced_110_h

#include <stdio.h>
#include "Defines.h"
#include <stdbool.h>

//110. 平衡二叉树
//给定一个二叉树，判断它是否是高度平衡的二叉树。
//
//本题中，一棵高度平衡二叉树定义为：
//
//一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过1。
//
//示例 1:
//
//给定二叉树 [3,9,20,null,null,15,7]
//
//    3
//   / \
//  9  20
//    /  \
//   15   7
//返回 true 。
//
//示例 2:
//
//给定二叉树 [1,2,2,3,3,null,null,4,4]
//
//       1
//      / \
//     2   2
//    / \
//   3   3
//  / \
// 4   4
//返回 false 。

bool isBalanced(struct TreeNode* root);

#endif /* IsBalanced_110_h */
