//
//  InsertionSortList_147.c
//  LeetCode
//
//  Created by Shun on 2019/3/27.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "InsertionSortList_147.h"


struct ListNode* insertionSortList(struct ListNode* head) {
    if(!head || !(head -> next))
        return head;
    struct ListNode * index_i = head -> next;
    while(index_i)
    {
        struct ListNode * index_j = head;
        
        while(index_j != index_i)
        {
            if(index_i->val <= index_j -> val)
            {
                index_i -> val = (index_i -> val) ^ (index_j -> val);
                index_j -> val = (index_i -> val) ^ (index_j -> val);
                index_i -> val = (index_i -> val) ^ (index_j -> val);
            }
            index_j = index_j -> next;
        }
        index_i = index_i -> next;
    }
    return head;
}
