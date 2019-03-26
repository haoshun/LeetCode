//
//  AddTwoNumbers.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/18.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "AddTwoNumbers_2.h"

struct ListNode* addNode()
{
    struct ListNode * newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode -> next =NULL;
    newNode -> val = 0;
    return newNode;
}

int carryFlag (int sum)
{
    return sum > 9 ? 1 : 0;
}

void addCarryNode(struct ListNode * l )
{
    struct ListNode * newNode = addNode();
    newNode -> val = 1;
    l -> next = newNode;
}

void addNodeToList(struct ListNode * l )
{
    struct ListNode * newNode = addNode();
    l -> next = newNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if(!l1 || !l2)
        return NULL;
    struct ListNode *newList , *head;
    newList = head = addNode();
    int sum = 0 , f = 0;
    while(l1 && l2)
    {
        addNodeToList(newList);
        newList = newList -> next;
        
        sum = l1 -> val + l2 -> val + f;
        newList -> val = sum % 10;
        f = carryFlag(sum);
        
        if(!l1 -> next)
        {
            while(l2 -> next)
            {
                l2 = l2 -> next;
                
                addNodeToList(newList);
                newList = newList -> next;
                
                sum = f + l2 -> val;
                newList -> val = sum % 10;
                f = carryFlag(sum);
                
                if(!l2 -> next && f )
                {
                    addCarryNode(newList);
                    f = 0;
                }
            }
        }
        if(!l2 -> next)
        {
            while(l1 -> next)
            {
                l1 = l1 -> next;
                
                addNodeToList(newList);
                newList = newList -> next;
                
                sum = f + l1 -> val;
                newList -> val = sum % 10;
                f = carryFlag(sum);
                
                if(!l1 -> next && f )
                {
                    addCarryNode(newList);
                    f = 0;
                }
            }
        }
        l1 = l1 -> next;
        l2 = l2 -> next;
        if (!l1 && !l2 && f) {
            addCarryNode(newList);
        }
    }
    
    return head->next;
}



