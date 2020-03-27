//
//  PostorderTraversal_145.h
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/22.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef PostorderTraversal_145_h
#define PostorderTraversal_145_h

#include <stdio.h>
#include "Defines.h"
//145. 二叉树的后序遍历
//给定一个二叉树，返回它的 后序 遍历。
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
//输出: [3,2,1]
//进阶: 递归算法很简单，你可以通过迭代算法完成吗？

void realPostOrderTraversal(struct TreeNode* root, int* count);

void outPutPostOrderTraversal(struct TreeNode* root, int* returnArray , int* index);

int* postorderTraversal(struct TreeNode* root, int* returnSize);

#endif /* PostorderTraversal_145_h */
