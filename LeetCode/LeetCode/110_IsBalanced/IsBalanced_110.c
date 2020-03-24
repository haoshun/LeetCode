//
//  IsBalanced_110.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/24.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "IsBalanced_110.h"

int postOrderTraversal(struct TreeNode* node , bool* isAVL)
{
    int heightLeft = 0 , heightRight = 0;

    if(node -> left)
        heightLeft = postOrderTraversal(node -> left ,isAVL) + 1;

    if(node -> right)
        heightRight = postOrderTraversal(node -> right , isAVL) + 1;

    node -> val = heightLeft >= heightRight ? heightLeft: heightRight;
    if(abs(heightLeft - heightRight) > 1)
        *isAVL = false;

    return node -> val;
}


bool isBalanced(struct TreeNode* root){
    bool isAVL = true;
    
    if(root)
        postOrderTraversal(root , &isAVL);

    return isAVL;
}

