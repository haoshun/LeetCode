//
//  IsCousins_993.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/23.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "IsCousins_993.h"


void judgeValue(struct TreeNode * node , int value , int index , int * flag , int * sum)
 {
     if(node -> val == value)
     {
         *sum -= value;
         if(*flag < 0)
            *flag = index;
     }
 }


bool isCousins(struct TreeNode* root, int x, int y){
    if(!root)
        return false;
    
    struct HS_Queue * pQueue = createQueue();
    int queueLen = 0 ,level = 0 , sum = x + y;

    struct QueueNode* qNode = NULL;

    enQueue(pQueue, createQueueNode(root));
    
    while(pQueue -> length)
    {
        ++level;

        queueLen = pQueue -> length;
        
        for(int i = 0 , lastIndex = -1; i < queueLen ; ++i)
        {
            qNode = deQueue(pQueue);
            
            if(qNode -> treeNode -> left)
            {
                enQueue(pQueue,createQueueNode(qNode -> treeNode -> left));
                judgeValue(qNode -> treeNode -> left , x , i , &lastIndex , &sum);
                judgeValue(qNode -> treeNode -> left , y , i , &lastIndex , &sum);
            }
        
            if(qNode -> treeNode -> right)
            {
                enQueue(pQueue,createQueueNode(qNode -> treeNode -> right));
                judgeValue(qNode -> treeNode -> right , x , i , &lastIndex , &sum);
                judgeValue(qNode -> treeNode -> right , y , i , &lastIndex , &sum);
            }
                
            free(qNode);
            
            if(!sum)
            {
                destroyQueue(pQueue);
                return lastIndex == i ? false : true;
            }
        }
    }
    destroyQueue(pQueue);
    return false;
}

