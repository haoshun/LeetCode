//
//  PreorderTraversal_144.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/15.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "PreorderTraversal_144.h"


void realPreOrderTraversal(struct TreeNode* root, int* count)
{
    (*count)++;

    if(root -> left)
        realPreOrderTraversal(root -> left,count);
    
    if(root -> right)
        realPreOrderTraversal(root -> right,count);
    
}

void outPutPreOrderTraversal(struct TreeNode* root, int* returnArray , int* index)
{
    returnArray [(*index)++] = root -> val;
    
    if(root -> left)
        outPutPreOrderTraversal(root -> left,returnArray,index);
    
    if(root -> right)
        outPutPreOrderTraversal(root -> right,returnArray,index);
      
}

int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    if(!root)
    {
        *returnSize = 0;
        return NULL;
    }
    int len = 0;

    realPreOrderTraversal(root , &len);

    int * preOrderArray = (int*)malloc(len * sizeof(int));
    int index = 0;
    *returnSize = len;
    outPutPreOrderTraversal(root,preOrderArray,&index);
    return preOrderArray;
}

