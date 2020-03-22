//
//  LevelOrder_102.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/21.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef LevelOrder_102_h
#define LevelOrder_102_h

#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"


//102. 二叉树的层次遍历
//给定一个二叉树，返回其按层次遍历的节点值。 （即逐层地，从左到右访问所有节点）。
//
//例如:
//给定二叉树: [3,9,20,null,null,15,7],
//
//    3
//   / \
//  9  20
//    /  \
//   15   7
//返回其层次遍历结果：
//
//[
//  [3],
//  [9,20],
//  [15,7]
//]





int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes);

#endif /* LevelOrder_102_h */
