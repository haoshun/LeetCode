//
//  PreorderTraversal_144.h
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/15.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef PreorderTraversal_144_h
#define PreorderTraversal_144_h

#include <stdio.h>
#include "Defines.h"

//给定一个二叉树，返回它的 前序 遍历。
//
// 示例:
//
//输入: [1,null,2,3]
//   1
//    \
//     2
//    /
//   3
//
//输出: [1,2,3]
//进阶: 递归算法很简单，你可以通过迭代算法完成吗？

int* preorderTraversal(struct TreeNode* root, int* returnSize);

#endif /* PreorderTraversal_144_h */
