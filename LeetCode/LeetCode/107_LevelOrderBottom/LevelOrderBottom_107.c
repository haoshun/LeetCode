//
//  LevelOrderBottom_107.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/22.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "LevelOrderBottom_107.h"

struct HS_Array_Node {
     struct HS_Array_Node* next;
     int* vaules;
     int length;
};

struct HS_Array_Node* createArrayNode107(int length)
{
   struct HS_Array_Node* node = (struct HS_Array_Node*)malloc(sizeof(struct HS_Array_Node));
   node -> next = NULL;
   node -> length = length;
   node -> vaules = (int*)malloc(sizeof(int)*length);
   return node;
}

int** levelOrderBottom(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
if(!root)
     {
         *returnSize = 0;
        return NULL;
     }
    
    struct HS_Queue * pQueue = createQueue();
    struct HS_Array_Node* arrayHead  = NULL ;
    struct HS_Array_Node*arrayRear = NULL;
    struct HS_Array_Node *arrayNode = NULL;
    int queueLen = 0 ,level = 0;
    
    struct QueueNode* qNode = NULL;

    enQueue(pQueue, createQueueNode(root));
    
    while(pQueue -> length)
    {
        ++level;
        arrayNode = createArrayNode107(pQueue -> length);
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
            arrayNode -> next = arrayHead;
            arrayHead = arrayNode;
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


