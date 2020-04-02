//
//  BstToGst_538_1038.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/4/2.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "BstToGst_538_1038.h"


  void inOrderTravelFromRight(struct TreeNode* root , int * sum)
 {
    if(root -> right)
        inOrderTravelFromRight(root -> right , sum);

    *sum += root -> val;
    root -> val = *sum;

    if(root -> left)
        inOrderTravelFromRight(root -> left , sum);
 }


struct TreeNode* bstToGst(struct TreeNode* root){
    if(!root || (!root -> left && !root -> right))
        return root;
    
    int sum = 0;

    inOrderTravelFromRight(root , &sum);

    return root;
}

