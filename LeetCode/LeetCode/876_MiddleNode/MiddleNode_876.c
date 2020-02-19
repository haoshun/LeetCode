//
//  MiddleNode_876.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "MiddleNode_876.h"


struct ListNode* middleNode(struct ListNode* head) {
    if(!head || !(head -> next))
        return head;
    if(!head -> next->next)
        return head -> next;
    struct ListNode *middle = head , *double_p = head -> next;
    while(double_p->next && double_p->next->next )
    {
        middle = middle -> next;
        double_p = double_p->next->next;
    }
    return middle -> next;
    
}
