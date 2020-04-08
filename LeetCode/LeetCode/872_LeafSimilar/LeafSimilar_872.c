//
//  LeafSimilar_872.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/4/8.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "LeafSimilar_872.h"


void preOrderTravelForLeaves(struct TreeNode* root , int * leaves , int * count)
{
    if(root)
    {
        if(!root -> left && !root -> right)
            leaves[(*count)++] = root -> val;
        
        preOrderTravelForLeaves(root -> left , leaves , count);
        preOrderTravelForLeaves(root -> right , leaves , count);
    }
}


bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2){
    int count1 = 0 , count2 = 0;
    int leaves1[200] ={0} , leaves2[200] = {0};
    preOrderTravelForLeaves(root1 , leaves1 , &count1);
    preOrderTravelForLeaves(root2 , leaves2 , &count2);
    
    if(count1 == count2)
    {
        for(int i = 0 ; i < count1 ; ++i)
        {
            if(leaves1[i] != leaves2[i])
                break;
            if(i == count1 - 1)
                return true;
        }
    }
    return false;
}

