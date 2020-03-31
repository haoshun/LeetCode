//
//  MergeTrees_617.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/31.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef MergeTrees_617_h
#define MergeTrees_617_h

#include <stdio.h>
#include "Defines.h"

//617. 合并二叉树
//给定两个二叉树，想象当你将它们中的一个覆盖到另一个上时，两个二叉树的一些节点便会重叠。
//
//你需要将他们合并为一个新的二叉树。合并的规则是如果两个节点重叠，那么将他们的值相加作为节点合并后的新值，否则不为 NULL 的节点将直接作为新二叉树的节点。
//
//示例 1:
//
//输入:
//    Tree 1                     Tree 2
//          1                         2
//         / \                       / \
//        3   2                     1   3
//       /                           \   \
//      5                             4   7
//输出:
//合并后的树:
//         3
//        / \
//       4   5
//      / \   \
//     5   4   7
//注意: 合并必须从两个树的根节点开始。

struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2);


#endif /* MergeTrees_617_h */
