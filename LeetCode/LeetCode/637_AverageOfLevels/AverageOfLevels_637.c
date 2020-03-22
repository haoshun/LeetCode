//
//  AverageOfLevels_637.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/22.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "AverageOfLevels_637.h"

struct HS_Array_Node {
     struct HS_Array_Node* next;
     double average;
};

struct HS_Array_Node* createArrayNode637()
{
   struct HS_Array_Node* node = (struct HS_Array_Node*)malloc(sizeof(struct HS_Array_Node));
   node -> next = NULL;
   node -> average = 0.0;
   return node;
}


double* averageOfLevels(struct TreeNode* root, int* returnSize){
    if(!root)
     {
         *returnSize = 0;
        return NULL;
     }
    
    struct HS_Queue * pQueue = createQueue();
    struct HS_Array_Node* arrayHead  = NULL ;
    struct HS_Array_Node* arrayRear = NULL;
    struct HS_Array_Node* arrayNode = NULL;
    int queueLen = 0 ,level = 0 ,maxWidth = 0;
    
    struct QueueNode* qNode = NULL;

    enQueue(pQueue, createQueueNode(root));
    
    while(pQueue -> length)
    {
        ++level;
        if (maxWidth < pQueue -> length) {
            maxWidth = pQueue -> length;
        }
        

        arrayNode = createArrayNode637();
        queueLen = pQueue -> length;
        
        for(int i = 0; i < queueLen ; ++i)
        {
            qNode = deQueue(pQueue);

            arrayNode -> average = arrayNode -> average + (qNode -> treeNode -> val * 1.0 - arrayNode -> average) / (i + 1);

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

    double *returnArray = (double*)malloc(sizeof(double)*level);
    
    for(int i = 0 ; i < level ; ++i)
    {
        returnArray[i] = arrayHead -> average;
        arrayHead = arrayHead -> next;
    }

    *returnSize = level;

    return returnArray;
}

