//
//  PostorderTraversal_145.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/22.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "PostorderTraversal_145.h"

void realPostOrderTraversal(struct TreeNode* root, int* count)
{
    if(root -> left)
        realPostOrderTraversal(root -> left,count);
    
    if(root -> right)
        realPostOrderTraversal(root -> right,count);
    
    (*count)++;
}

void outPutPostOrderTraversal(struct TreeNode* root, int* returnArray , int* index)
{
    if(root -> left)
        outPutPostOrderTraversal(root -> left,returnArray,index);
    
    if(root -> right)
        outPutPostOrderTraversal(root -> right,returnArray,index);

    returnArray [(*index)++] = root -> val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize)
{
    if(!root)
    {
        *returnSize = 0;
        return NULL;
    }
    int len = 0;

    realPostOrderTraversal(root , &len);

    int * PostOrderArray = (int*)malloc(len * sizeof(int));
    int index = 0;
    *returnSize = len;
    outPutPostOrderTraversal(root,PostOrderArray,&index);
    return PostOrderArray;
}


