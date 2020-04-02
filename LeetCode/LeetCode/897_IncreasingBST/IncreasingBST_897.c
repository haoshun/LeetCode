//
//  IncreasingBST_897.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/4/2.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "IncreasingBST_897.h"


 void inOrderTravel(struct TreeNode* root, struct TreeNode** nums , int * count)
 {
     if(root -> left)
        inOrderTravel(root -> left , nums , count);
    
    nums[(*count)++] = root;

    if(root -> right)
        inOrderTravel(root -> right , nums , count);
 }


struct TreeNode* increasingBST(struct TreeNode* root){
    if(!root || (!root -> left && !root -> right))
        return root;

    int count = 0;
    struct TreeNode* nums[100] = {0};

    inOrderTravel(root , &nums , &count);

    for(int i = 0 ; i < count - 1; ++i)
    {
        nums[i] -> left = NULL;
        nums[i] -> right = nums[i + 1];
    }
    return *nums;
}


