//
//  ContainsNearbyDuplicate_219.h
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/27.
//  Copyright © 2019 desezed. All rights reserved.
//

#ifndef ContainsNearbyDuplicate_219_h
#define ContainsNearbyDuplicate_219_h

#include <stdio.h>
#include <stdbool.h>

//219. 存在重复元素 II
//给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，使得 nums [i] = nums [j]，并且 i 和 j 的差的绝对值最大为 k。
//
//示例 1:
//
//输入: nums = [1,2,3,1], k = 3
//输出: true
//示例 2:
//
//输入: nums = [1,0,1,1], k = 1
//输出: true
//示例 3:
//
//输入: nums = [1,2,3,1,2,3], k = 2
//输出: false

bool containsNearbyDuplicate(int* nums, int numsSize, int k);

#endif /* ContainsNearbyDuplicate_219_h */
