//
//  MaxDepth_104.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/23.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "MaxDepth_104.h"


int maxDepth(struct TreeNode* root)
{
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

            if(qNode -> treeNode -> left)
                enQueue(pQueue,createQueueNode(qNode -> treeNode -> left));
            if(qNode -> treeNode -> right)
                enQueue(pQueue,createQueueNode(qNode -> treeNode -> right));
            
            free(qNode);
        }
    }
    free(pQueue);

    return level;
}
