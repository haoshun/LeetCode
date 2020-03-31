//
//  IsSameTree_100.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/31.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef IsSameTree_100_h
#define IsSameTree_100_h

#include <stdio.h>
#include <stdbool.h>
#include "Defines.h"

//100. 相同的树
//给定两个二叉树，编写一个函数来检验它们是否相同。
//
//如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
//
//示例 1:
//
//输入:       1         1
//          / \       / \
//         2   3     2   3
//
//        [1,2,3],   [1,2,3]
//
//输出: true
//示例 2:
//
//输入:      1          1
//          /           \
//         2             2
//
//        [1,2],     [1,null,2]
//
//输出: false
//示例 3:
//
//输入:       1         1
//          / \       / \
//         2   1     1   2
//
//        [1,2,1],   [1,1,2]
//
//输出: false

bool isSameTree(struct TreeNode* p, struct TreeNode* q);

#endif /* IsSameTree_100_h */
