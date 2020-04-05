//
//  SumRootToLeaf_1022.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/4/5.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "SumRootToLeaf_1022.h"

void preOrderToLeaf(struct TreeNode* root , int num , int * totalSum)
{
    int sum = (num << 1) + root -> val;
    if(!root -> left && !root -> right)
        *totalSum += sum;
    if(root -> left)
        preOrderToLeaf(root -> left , sum , totalSum);
    if(root -> right)
        preOrderToLeaf(root -> right , sum , totalSum);
    
}


int sumRootToLeaf(struct TreeNode* root){
    int sum = 0;
    if(root)
        preOrderToLeaf(root , 0 , &sum);
    return sum;
}
