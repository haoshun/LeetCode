//
//  DetectCycle_142.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/27.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "DetectCycle_142.h"


struct ListNode *detectCycle(struct ListNode *head) {
    if(!head || !head -> next)
        return NULL;
    struct ListNode *fast = head , *slow = head;
    while(fast -> next && fast -> next -> next)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
        if(fast == slow)
            break;
    }
    if(!fast -> next|| !fast -> next -> next)
        return NULL;
    slow = head;
    while(fast != slow)
    {
        fast = fast -> next;
        slow = slow -> next;
    }
    return fast;
}

