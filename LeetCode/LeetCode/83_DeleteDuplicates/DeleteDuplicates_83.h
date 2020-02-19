//
//  DeleteDuplicates_83.h
//  LeetCode
//
//  Created by Shun on 2019/3/26.
//  Copyright © 2019 Shun. All rights reserved.
//

#ifndef DeleteDuplicates_83_h
#define DeleteDuplicates_83_h

#include <stdio.h>
#include "Defines.h"

//83. 删除排序链表中的重复元素
//给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
//
//示例 1:
//
//输入: 1->1->2
//输出: 1->2
//示例 2:
//
//输入: 1->1->2->3->3
//输出: 1->2->3
struct ListNode* deleteDuplicates_83(struct ListNode* head);

#endif /* DeleteDuplicates_83_h */
