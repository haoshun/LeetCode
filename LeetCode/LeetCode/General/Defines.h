//
//  Defines.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/2/19.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef Defines_h
#define Defines_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct QueueNode {
     struct TreeNode *treeNode;
     struct QueueNode *next;
};

 struct HS_Queue {
     struct QueueNode *head;
     struct QueueNode *rear;
     int length;
};







struct TreeNode* createNode(int num);

struct QueueNode* createQueueNode(struct TreeNode* treeNode);

//创建队列
struct HS_Queue* createQueue(void);

//获得队列长度
int getQueueLen(struct HS_Queue * pQueue);

//队列是否为空
int isQueueEmpty(struct HS_Queue * pQueue);

//入队
void enQueue(struct HS_Queue* pQueue , struct QueueNode* node);

//出队
struct QueueNode* deQueue(struct HS_Queue* pQueue);

void destroyQueue(struct HS_Queue * pQueue);

//struct HS_Array_Node* createArrayNode(int length);



#endif /* Defines_h */
