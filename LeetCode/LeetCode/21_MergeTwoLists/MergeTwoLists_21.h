//
//  MergeTwoLists_21.h
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/21.
//  Copyright © 2019 desezed. All rights reserved.
//

#ifndef MergeTwoLists_21_h
#define MergeTwoLists_21_h

#include <stdio.h>
#include "Tools.h"
//21. 合并两个有序链表
//将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
//
//示例：
//
//输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4



struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);

#endif /* MergeTwoLists_21_h */
