//
//  SumOfLeftLeaves_404.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/4/5.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "SumOfLeftLeaves_404.h"


 int postOrderTravel_404(struct TreeNode* root , int * sum)
 {
    if(root -> left)
        *sum += postOrderTravel_404(root -> left, sum);
    
    if(root -> right)
        postOrderTravel_404(root -> right , sum);

    return (!root -> left) && (!root -> right) ? root -> val: 0;
 }


int sumOfLeftLeaves(struct TreeNode* root){
    if(!root ||((!root -> left)&&(!root -> right)))
        return 0;
    int sum = 0;

    postOrderTravel_404(root , &sum);

    return sum;
}
