//
//  Intersection_349.h
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/28.
//  Copyright © 2019 desezed. All rights reserved.
//

#ifndef Intersection_349_h
#define Intersection_349_h

#include <stdio.h>
#include <stdlib.h>

//349. 两个数组的交集
//
//给定两个数组，编写一个函数来计算它们的交集。
//
//示例 1:
//
//输入: nums1 = [1,2,2,1], nums2 = [2,2]
//输出: [2]
//示例 2:
//
//输入: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//输出: [9,4]
//说明:
//
//输出结果中的每个元素一定是唯一的。
//我们可以不考虑输出结果的顺序。

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize);

#endif /* Intersection_349_h */
