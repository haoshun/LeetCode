//
//  FindBottomLeftValue_513.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/4/2.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef FindBottomLeftValue_513_h
#define FindBottomLeftValue_513_h

#include <stdio.h>
#include "Defines.h"

//513. 找树左下角的值
//给定一个二叉树，在树的最后一行找到最左边的值。
//
//示例 1:
//
//输入:
//
//    2
//   / \
//  1   3
//
//输出:
//1
//
//
//示例 2:
//
//输入:
//
//        1
//       / \
//      2   3
//     /   / \
//    4   5   6
//       /
//      7
//
//输出:
//7
//
//
//注意: 您可以假设树（即给定的根节点）不为 NULL。

int findBottomLeftValue(struct TreeNode* root);

#endif /* FindBottomLeftValue_513_h */
