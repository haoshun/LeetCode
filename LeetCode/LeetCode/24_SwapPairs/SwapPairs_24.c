//
//  SwapPairs_24.c
//  LeetCode
//
//  Created by Shun on 2019/3/22.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "SwapPairs_24.h"

struct ListNode* swapPairs(struct ListNode* head) {
    if(!head || !head -> next )
        return head;
    struct ListNode * first = head , * second = head -> next  , *temp = NULL;
    head = second;
    while(1)
    {
        if(temp)
            temp -> next = second;
        first->next = second -> next;
        second -> next = first;
        temp = first;
        if(first->next && first -> next -> next)
        {
            first = first -> next;
            second = first -> next;
        }
        else
        {
            break;
        }
    }
    return head;
}


