//
//  DeleteDuplicates_83.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "DeleteDuplicates_83.h"

struct ListNode* deleteDuplicates_83(struct ListNode* head) {
    if(!head || !(head->next))
        return head;
    struct ListNode * index = head->next , * last = head;
    int temp = last->val;
    while(index)
    {
        if(index->val != temp)
        {
            last -> next = index;
            temp = index -> val;
            last = last -> next;
        }
        index = index -> next;
        if(!index)
        {
            last -> next = NULL;
        }
    }
    return head;
}

