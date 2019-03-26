//
//  ThreeSum.h
//  LeetCode
//
//  Created by Shun on 2018/5/6.
//  Copyright © 2018年 desezed. All rights reserved.
//

#ifndef ThreeSum_h
#define ThreeSum_h

#include <stdio.h>
#include <stdlib.h>

//15. 三数之和
//给定一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？找出所有满足条件且不重复的三元组。
//
//注意：答案中不可以包含重复的三元组。
//
//例如, 给定数组 nums = [-1, 0, 1, 2, -1, -4]，
//
//满足要求的三元组集合为：
//[
// [-1, 0, 1],
// [-1, -1, 2]
// ]

int** threeSum(int* nums, int numsSize, int* returnSize);

int** threeSumBySorted(int* nums, int numsSize, int* returnSize);

#endif /* ThreeSum_h */
