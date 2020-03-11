//
//  InorderTraversal_94.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/11.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef InorderTraversal_94_h
#define InorderTraversal_94_h

#include <stdio.h>
#include "Defines.h"

//给定一个二叉树，返回它的中序 遍历。
//
//示例:
//
//输入: [1,null,2,3]
//   1
//    \
//     2
//    /
//   3
//
//输出: [1,3,2]
//进阶: 递归算法很简单，你可以通过迭代算法完成吗？

int* inorderTraversal(struct TreeNode* root, int* returnSize);

#endif /* InorderTraversal_94_h */
