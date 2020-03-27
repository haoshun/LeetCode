//
//  IsSymmetric_101.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/27.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "IsSymmetric_101.h"

bool isMirror(struct TreeNode* tree1 , struct TreeNode* tree2)
{
    if(tree1 == NULL && tree2 == NULL)
        return true;
    if(tree1 == NULL || tree2 == NULL)
        return false;

    return (tree1 -> val == tree2 -> val)  && isMirror(tree1 -> right , tree2 -> left) && isMirror(tree1 -> left , tree2 -> right);
    
}

bool isSymmetric(struct TreeNode* root){
    return isMirror(root,root);
}


