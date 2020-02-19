//
//  HasCycle_141.c
//  LeetCode
//
//  Created by Shun on 2019/3/27.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "HasCycle_141.h"

bool hasCycle(struct ListNode *head) {
    if(!head || !head->next)
        return false;
    struct ListNode *fast = head , *slow = head;
    while(fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
            return true;
    }
    return false;
}

