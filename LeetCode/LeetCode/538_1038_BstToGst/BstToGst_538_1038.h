//
//  BstToGst_538_1038.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/4/2.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef BstToGst_538_1038_h
#define BstToGst_538_1038_h

#include <stdio.h>
#include "Defines.h"

//538. 把二叉搜索树转换为累加树
//给定一个二叉搜索树（Binary Search Tree），把它转换成为累加树（Greater Tree)，使得每个节点的值是原来的节点值加上所有大于它的节点值之和。
//
//
//
//例如：
//
//输入: 原始二叉搜索树:
//              5
//            /   \
//           2     13
//
//输出: 转换为累加树:
//             18
//            /   \
//          20     13
//
//
//本题和 1038 相同
//
//1038. 从二叉搜索树到更大和树
//给出二叉 搜索 树的根节点，该二叉树的节点值各不相同，修改二叉树，使每个节点 node 的新值等于原树中大于或等于 node.val 的值之和。
//
//提醒一下，二叉搜索树满足下列约束条件：
//
//节点的左子树仅包含键 小于 节点键的节点。
//节点的右子树仅包含键 大于 节点键的节点。
//左右子树也必须是二叉搜索树。
//
//
//示例：
//
//
//
//输入：[4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
//输出：[30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
//
//
//提示：
//
//树中的节点数介于 1 和 100 之间。
//每个节点的值介于 0 和 100 之间。
//给定的树为二叉搜索树。


struct TreeNode* bstToGst(struct TreeNode* root);
 

#endif /* BstToGst_538_1038_h */
