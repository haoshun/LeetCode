//
//  RemoveElements_203.h
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/21.
//  Copyright © 2019 desezed. All rights reserved.
//

#ifndef RemoveElements_203_h
#define RemoveElements_203_h

#include <stdio.h>

//203. 移除链表元素
//删除链表中等于给定值 val 的所有节点。
//
//示例:
//
//输入: 1->2->6->3->4->5->6, val = 6
//输出: 1->2->3->4->5

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val);

#endif /* RemoveElements_203_h */
