//
//  RemoveElements_203.c
//  LeetCode
//
//  Created by Shun on 2019/3/21.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "RemoveElements_203.h"

struct ListNode* removeElements(struct ListNode* head, int val) {
    if(!head)
        return NULL;
    if(!(head -> next) && head -> val == val)
        return NULL;
    struct ListNode * index  = head , *last = NULL;
    while(index)
    {
        if(index -> val == val)
        {
            if(head == index)
            {
                head = index -> next;
                last = index;
                index = index -> next;
                continue;
            }
            if(index->next)
            {
                last->next = index->next;
            }
            else
            {
                last->next = NULL;
            }
        }
        else
        {
            last = index;
        }
        index = index->next;
    }
    if(last == NULL)
        return NULL;
    return head;
}



