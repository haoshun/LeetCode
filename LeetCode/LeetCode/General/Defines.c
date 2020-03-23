//
//  Defines.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/2/19.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "Defines.h"



struct TreeNode* createNode(int num)
{
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node -> val = num;
    node -> left = NULL;
    node -> right = NULL;
    return node;
}


struct QueueNode* createQueueNode(struct TreeNode* treeNode)
{
   struct QueueNode* node = (struct QueueNode*)malloc(sizeof(struct QueueNode));
   node -> next = NULL;
   node -> treeNode = treeNode;
   return node;
}


//创建队列
 struct HS_Queue* createQueue()
 {
    struct HS_Queue* pQueue = (struct HS_Queue*)malloc(sizeof(struct HS_Queue));
    pQueue -> head = NULL;
    pQueue -> rear = NULL;
    pQueue -> length = 0;
    return pQueue;
 }

//获得队列长度
int getQueueLen(struct HS_Queue * pQueue)
{
    return pQueue -> length;
}

//队列是否为空
int isQueueEmpty(struct HS_Queue * pQueue)
{
    return pQueue -> length == 0;
}



//入队
 void enQueue(struct HS_Queue* pQueue , struct QueueNode* node)
 {
     if(pQueue && node)
     {
         if (pQueue -> length) {
             pQueue -> rear ->next = node;
         }
         else{
             pQueue -> head = node;
         }
         pQueue -> rear = node;
         (pQueue -> length)++;
     }
 }

//出队
 struct QueueNode* deQueue(struct HS_Queue* pQueue)
 {
     if(pQueue && pQueue -> length)
     {
         struct QueueNode* node = pQueue -> head;
         pQueue -> head = node -> next;
         (pQueue -> length)--;
         if(!(pQueue -> length))
         {
             pQueue -> head = NULL;
             pQueue -> rear = NULL;
         }
         return node;
     }
     return NULL;
 }

//销毁队列
void destroyQueue(struct HS_Queue * pQueue)
{
    if(pQueue)
    {
        if(pQueue -> length)
        {
            int queueLen = pQueue -> length;
            struct QueueNode* qNode = NULL;
            for(int i = 0 ; i < queueLen ; ++i)
            {
                qNode = deQueue(pQueue);
                free(qNode);
            }
        }
        free(pQueue);
    }
}



