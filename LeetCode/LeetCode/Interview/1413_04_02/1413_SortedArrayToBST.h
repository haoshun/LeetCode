//
//  1413_SortedArrayToBST.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/16.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef _413_SortedArrayToBST_h
#define _413_SortedArrayToBST_h

#include <stdio.h>
#include "Defines.h"

//面试题 04.02. 最小高度树
//给定一个有序整数数组，元素各不相同且按升序排列，编写一个算法，创建一棵高度最小的二叉搜索树。
//
//示例:
//给定有序数组: [-10,-3,0,5,9],
//
//一个可能的答案是：[0,-3,9,-10,null,5]，它可以表示下面这个高度平衡二叉搜索树：
//
//          0
//         / \
//       -3   9
//       /   /
//     -10  5

struct TreeNode* sortedArrayToBST(int* nums, int numsSize);

#endif /* _413_SortedArrayToBST_h */
