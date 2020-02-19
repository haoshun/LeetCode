//
//  MergeTwoLists_21.c
//  LeetCode
//
//  Created by Shun on 2019/3/21.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "MergeTwoLists_21.h"

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (l1 == NULL && l2 ==NULL) {
        return NULL;
    }
    if (l1 == NULL ) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }
    struct ListNode * result  ,*first, * l1_index = l1 , * l2_index = l2;
    if(l1->val >l2->val)
    {
        result = l2;
        l2_index = l2->next;
    }
    else
    {
        result = l1;
        l1_index = l1->next;
    }
    first = result;
    while(l1_index || l2_index)
    {
        if(!l1_index)
        {
            result->next = l2_index;
            l2_index = l2_index->next;
            if (!l2_index)
            {
                break;
            }
        }
        if(!l2_index)
        {
            result->next = l1_index;
            l1_index = l1_index->next;
            if (!l1_index)
            {
                break;
            }
        }
        if(l1_index && l2_index)
        {
            if(l1_index->val >l2_index->val)
            {
                result ->next = l2_index;
                l2_index = l2_index->next;
            }
            else
            {
                result ->next = l1_index;
                l1_index = l1_index->next;
            }
        }
        result = result->next;
        
    }
    return first;
}


