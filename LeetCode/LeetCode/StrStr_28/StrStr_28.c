//
//  StrStr_28.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/10/14.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "StrStr_28.h"

int strStr(char* haystack, char* needle) {
    if(!needle || !haystack)
        return -1;
    if(strlen(needle) == 0)
        return 0;
    int h_len = strlen(haystack) , n_len = strlen(needle);
    if(h_len < n_len)
        return -1;
    for(int i = 0  ; i<h_len ; ++i)
    {
        if(haystack[i] == needle[0])
        {
            if(n_len == 1)
            {
                return i;
            }
            else
            {
                for(int j = 1 ; j <n_len ; ++j)
                {
                    if(haystack[i+j] != needle[j])
                    {
                        //i+=j;
                        break;
                    }
                    if(j == n_len-1)
                    {
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}


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



