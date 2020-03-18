//
//  BstFromPreorder_1008.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/18.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "BstFromPreorder_1008.h"


struct TreeNode* bstFromPreorder(int* preorder, int preorderSize){
    if(!preorder || !preorderSize)
        return NULL;

    struct TreeNode* nodeArray[preorderSize];
    
    for(int i = 0 ; i < preorderSize ; ++i)
    {
        nodeArray[i] = createNode(preorder[i]);
    }
    struct TreeNode* bstRoot = nodeArray[0];
    for(int index = 1 , anchor = 0; index < preorderSize ; ++index)
    {
        if(preorder[index] < preorder[index - 1])
        {
            nodeArray[index-1] -> left = nodeArray[index];
        }
        else
        {
            if(preorder[index] > preorder[anchor])
            {
                nodeArray[anchor] -> right = nodeArray[index];
                anchor = index;
            }
            else
            {
                int maxIndex = index - 1;
                for(int j = index - 1 ; j > anchor ; --j)
                {
                    if(preorder[j] > preorder[maxIndex])
                        maxIndex = j;
                }
                nodeArray[maxIndex] -> right = nodeArray[index];
            }
        }
    }
    return bstRoot;
}


