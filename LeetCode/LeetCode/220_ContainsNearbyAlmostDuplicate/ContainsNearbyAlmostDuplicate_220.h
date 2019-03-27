//
//  ContainsNearbyAlmostDuplicate_220.h
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/27.
//  Copyright © 2019 desezed. All rights reserved.
//

#ifndef ContainsNearbyAlmostDuplicate_220_h
#define ContainsNearbyAlmostDuplicate_220_h

#include <stdio.h>
#include <stdbool.h>

//220. 存在重复元素 III
//
//给定一个整数数组，判断数组中是否有两个不同的索引 i 和 j，使得 nums [i] 和 nums [j] 的差的绝对值最大为 t，并且 i 和 j 之间的差的绝对值最大为 ķ。
//
//示例 1:
//
//输入: nums = [1,2,3,1], k = 3, t = 0
//输出: true
//示例 2:
//
//输入: nums = [1,0,1,1], k = 1, t = 2
//输出: true
//示例 3:
//
//输入: nums = [1,5,9,1,5,9], k = 2, t = 3
//输出: false

bool containsNearbyAlmostDuplicate(int* nums, int numsSize, int k, int t);

#endif /* ContainsNearbyAlmostDuplicate_220_h */
