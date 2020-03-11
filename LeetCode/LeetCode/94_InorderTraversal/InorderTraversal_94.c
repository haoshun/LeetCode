//
//  InorderTraversal_94.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/11.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "InorderTraversal_94.h"

void realInOrderTraversal(struct TreeNode* root, int* count)
{
    
    if(root -> left)
        realInOrderTraversal(root -> left,count);
    (*count)++;
    if(root -> right)
        realInOrderTraversal(root -> right,count);
    
}

void outPutInOrderTraversal(struct TreeNode* root, int* returnArray , int* index)
{
    
    if(root -> left)
        outPutInOrderTraversal(root -> left,returnArray,index);
    returnArray [(*index)++] = root -> val;
    if(root -> right)
        outPutInOrderTraversal(root -> right,returnArray,index);
    
}

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    if(!root)
    {
        *returnSize = 0;
        return NULL;
    }
    int len = 0;

    realInOrderTraversal(root , &len);

    int * inOrderArray = (int*)malloc(len * sizeof(int));
    int index = 0;
    *returnSize = len;
    outPutInOrderTraversal(root,inOrderArray,&index);
    return inOrderArray;
}

