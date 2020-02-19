//
//  DeleteDuplicates_82.h
//  LeetCode
//
//  Created by Shun on 2019/3/26.
//  Copyright © 2019 Shun. All rights reserved.
//

#ifndef DeleteDuplicates_82_h
#define DeleteDuplicates_82_h

#include <stdio.h>
#include "Defines.h"

//82. 删除排序链表中的重复元素 II
//给定一个排序链表，删除所有含有重复数字的节点，只保留原始链表中 没有重复出现 的数字。
//
//示例 1:
//
//输入: 1->2->3->3->4->4->5
//输出: 1->2->5
//示例 2:
//
//输入: 1->1->1->2->3
//输出: 2->3
struct ListNode* deleteDuplicates(struct ListNode* head);

#endif /* DeleteDuplicates_82_h */
