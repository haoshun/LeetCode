//
//  WidthOfBinaryTree_662.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/22.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "WidthOfBinaryTree_662.h"

struct QueueNode {
      struct TreeNode *treeNode;
      struct QueueNode *next;
      long position;
 };

  struct HS_Queue {
      struct QueueNode *head;
      struct QueueNode *rear;
      int length;
 };

 struct QueueNode*  createQueueNode(struct TreeNode* treeNode , int position)
 {
    struct QueueNode* node = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    node -> next = NULL;
    node -> treeNode = treeNode;
    node -> position = position;
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


int widthOfBinaryTree(struct TreeNode* root){
    if(!root)
     {
        return 0;
     }

    struct HS_Queue * pQueue = createQueue();
    int queueLen = 0 ,maxWidth = 1;
    struct QueueNode* qNode = NULL;
    long left , right;
    enQueue(pQueue, createQueueNode(root,0));
    
    while(pQueue -> length)
    {
        queueLen = pQueue -> length;
        left = -1 , right = -1;
        for(int i = 0 ; i < queueLen ; ++i)
        {
            qNode = deQueue(pQueue);
            if(left < 0)
                left = qNode -> position;
            right = qNode -> position;

            if(qNode -> treeNode -> left)
                enQueue(pQueue,createQueueNode(qNode -> treeNode -> left, 2 * qNode -> position));
            if(qNode -> treeNode -> right)
                enQueue(pQueue,createQueueNode(qNode -> treeNode -> right, 2 * qNode -> position + 1));
            
            free(qNode);

            if(i == queueLen - 1)
            {
                if(right > left)
                {
                    if(right - left + 1 > maxWidth)
                    {
                        maxWidth = right - left + 1;
                    }
                }
            }
        }
    }

    return maxWidth;


}
