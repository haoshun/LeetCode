//
//  FindBottomLeftValue_513.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/4/2.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "FindBottomLeftValue_513.h"

void postOrderTravel(struct TreeNode* root , int * depth , int * curDepth , int * value)
{
    if(root -> left)
    {
        ++(*curDepth);
        postOrderTravel(root -> left , depth , curDepth , value);
    }
        
    if(root -> right)
    {
        ++(*curDepth);
        postOrderTravel(root -> right , depth , curDepth , value);
    }
        
    if(*curDepth > *depth)
    {
        *depth = *curDepth;
        *value = root -> val;
    }
    --(*curDepth);
}


int findBottomLeftValue(struct TreeNode* root){
    if(!root -> left && !root -> right)
        return root -> val;

    int value = 0, depth = 0 ,curDepth = 0;

    postOrderTravel(root , &depth , &curDepth , &value);

    return value;
}

