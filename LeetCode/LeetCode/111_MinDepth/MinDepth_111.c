//
//  MinDepth_111.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/23.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "MinDepth_111.h"


int minDepth(struct TreeNode* root){
    if(!root)
        return 0;
    
    struct HS_Queue * pQueue = createQueue();
    int queueLen = 0 ,level = 0;
    
    struct QueueNode* qNode = NULL;

    enQueue(pQueue, createQueueNode(root));
    
    while(pQueue -> length)
    {
        ++level;

        queueLen = pQueue -> length;
        
        for(int i = 0; i < queueLen ; ++i)
        {
            qNode = deQueue(pQueue);

            if(!qNode -> treeNode -> left && !qNode -> treeNode -> right)
                //虽然这里可以AC 但是 内存未释放完
                return level;

            if(qNode -> treeNode -> left)
                enQueue(pQueue,createQueueNode(qNode -> treeNode -> left));
            if(qNode -> treeNode -> right)
                enQueue(pQueue,createQueueNode(qNode -> treeNode -> right));
            
            free(qNode);
        }
    }

    return level;
}

