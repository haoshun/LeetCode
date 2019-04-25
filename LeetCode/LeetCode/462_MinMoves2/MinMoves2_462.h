//
//  MinMoves2_462.h
//  LeetCode
//
//  Created by 郝源顺 on 2019/4/25.
//  Copyright © 2019 desezed. All rights reserved.
//

#ifndef MinMoves2_462_h
#define MinMoves2_462_h

#include <stdio.h>

//462. 最少移动次数使数组元素相等 II
//
//给定一个非空整数数组，找到使所有数组元素相等所需的最小移动数，其中每次移动可将选定的一个元素加1或减1。 您可以假设数组的长度最多为10000。
//
//例如:
//
//输入:
//[1,2,3]
//
//输出:
//2
//
//说明：
//只有两个动作是必要的（记得每一步仅可使其中一个元素加1或减1）：
//
//[1,2,3]  =>  [2,2,3]  =>  [2,2,2]
int minMoves2(int* nums, int numsSize);

#endif /* MinMoves2_462_h */
