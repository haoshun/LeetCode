//
//  SumEvenGrandparent_1315.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/4/5.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "SumEvenGrandparent_1315.h"

void preOrderTravel(struct TreeNode* root , int * sum)
 {
     if(!(root -> val % 2))
     {
        if(root -> left)
        {
            if(root -> left -> left)
                *sum += root -> left -> left ->val;
            if(root -> left -> right)
                *sum += root -> left -> right ->val;
        }
        if(root -> right)
        {
            if(root -> right -> left)
                *sum += root -> right -> left ->val;
            if(root -> right -> right)
                *sum += root -> right -> right ->val;
        }
     }

     if(root -> left)
        preOrderTravel(root -> left , sum);

    if(root -> right)
        preOrderTravel(root -> right , sum);
 }


int sumEvenGrandparent(struct TreeNode* root){
    int sum = 0;
    if(root)
        preOrderTravel(root , &sum);
    return sum;
}
