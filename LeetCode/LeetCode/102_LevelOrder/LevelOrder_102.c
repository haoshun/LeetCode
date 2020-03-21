//
//  LevelOrder_102.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/21.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "LevelOrder_102.h"


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


struct HS_Array_Node* createArrayNode(int length)
{
   struct HS_Array_Node* node = (struct HS_Array_Node*)malloc(sizeof(struct HS_Array_Node));
   node -> next = NULL;
   node -> length = length;
   node -> vaules = (int*)malloc(sizeof(int)*length);
   return node;
}


int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes)
{
     if(!root)
     {
         *returnSize = 0;
        return NULL;
     }
    
    struct HS_Queue * pQueue = createQueue();
    struct HS_Array_Node* arrayHead  = NULL ;
    struct HS_Array_Node*arrayRear = NULL;
    struct HS_Array_Node *arrayNode = NULL;
    int queueLen = 0 ,level = 0 ,maxWidth = 0;
    
    struct QueueNode* qNode = NULL;

    enQueue(pQueue, createQueueNode(root));
    
    while(pQueue -> length)
    {
        ++level;
        if (maxWidth < pQueue -> length) {
            maxWidth = pQueue -> length;
        }
        

        arrayNode = createArrayNode(pQueue -> length);
        queueLen = pQueue -> length;
        
        for(int i = 0; i < queueLen ; ++i)
        {
            qNode = deQueue(pQueue);

            arrayNode -> vaules[i] = qNode -> treeNode -> val;

            if(qNode -> treeNode -> left)
                enQueue(pQueue,createQueueNode(qNode -> treeNode -> left));
            if(qNode -> treeNode -> right)
                enQueue(pQueue,createQueueNode(qNode -> treeNode -> right));
            
            free(qNode);
        }
        
        if(!arrayHead)
        {
            arrayHead = arrayNode;
            arrayRear = arrayNode;
        }
        else
        {
            arrayRear -> next = arrayNode;
            arrayRear = arrayNode;
        }
    }

    int **returnArray = (int**)malloc(sizeof(int*)*level);
    int *columnSizes = (int*)malloc(sizeof(int)*level);
    

    for(int i = 0 ; i < level ; ++i)
    {
        columnSizes[i] = arrayHead -> length;
        
        returnArray[i] = arrayHead -> vaules;

        arrayHead = arrayHead -> next;
    }

    *returnSize = level;
    *returnColumnSizes = columnSizes;

    return returnArray;
}


