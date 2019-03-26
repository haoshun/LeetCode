//
//  DeleteDuplicates_82.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "DeleteDuplicates_82.h"

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(!head || !(head->next))
        return head;
    struct ListNode * last = head , * index = head -> next , *oneMore;
    int temp = last -> val , isD = 0;
    while(index)
    {
        if(last == head)
        {
            if(index -> val == temp)
            {
                isD = 1;
            }
            else
            {
                if(isD)
                {
                    head = index;
                }
                isD = 0;
                last = index;
                temp = index ->val;
            }
        }
        else
        {
            if(index -> val == temp)
            {
                isD = 1;
            }
            else
            {
                temp = index-> val;
                if(!isD)
                {
                    last = index;
                }
                else
                {
                    last -> next = index -> next;
                    last -> val = index -> val;
                }
                isD = 0;
            }
        }
        index = index -> next;
        if(!index)
        {
            if(isD)
            {
                if(head == last)
                    return NULL;
                // if(head->next ==last)
                //     head->next= NULL;
                oneMore = head;
                while(oneMore)
                {
                    if(oneMore -> next == last)
                        oneMore -> next = NULL;
                    oneMore = oneMore ->next;
                }
            }
            
        }
        
    }
    return head;
}

