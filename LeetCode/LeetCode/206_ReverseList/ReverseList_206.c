//
//  ReverseList_206.c
//  LeetCode
//
//  Created by Shun on 2019/3/27.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "ReverseList_206.h"

struct ListNode* reverseList(struct ListNode* head) {
    if(!head || !(head->next))
        return head;
    // if(!head->next->next)
    // {
    //     head->next->next = head;
    //     head = head->next;
    //     head->next->next = NULL;
    // }
    // struct ListNode * rear = head -> next , *h = head;
    // while(rear->next)
    // {
    //     struct ListNode * tmp = rear ->next;
    //     rear->next = h;
    //     if(h == head)
    //         h -> next = NULL;
    //     h = rear;
    //     rear = tmp;
    //     if(!(rear -> next))
    //     {
    //         rear -> next = h;
    //         head = rear;
    //         break;
    //     }
    // }
    // return head;
    //迭代
    // struct ListNode dummy ;
    // dummy.next = head;
    // struct ListNode *cur = head;
    // while(cur -> next)
    // {
    //     struct ListNode *tmp = cur -> next;
    //     cur -> next = tmp -> next;
    //     tmp -> next = dummy.next;
    //     dummy.next = tmp;
    // }
    // return dummy.next;
    
    //递归
    struct ListNode * p = head;
    head = reverseList(p->next);
    p->next->next =p;
    p->next = NULL;
    return head;
}

