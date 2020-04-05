//
//  FindTilt_563.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/4/5.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "FindTilt_563.h"

 int postOrderTravelTilt(struct TreeNode * root , int * treeTilt)
 {
    int leftSum = 0, rightSum = 0;

    if(root -> left)
        leftSum += postOrderTravelTilt(root -> left , treeTilt);

    if(root -> right)
        rightSum += postOrderTravelTilt(root -> right , treeTilt);

    (*treeTilt) += abs(leftSum - rightSum);
    
     return root -> val + leftSum + rightSum;
 }


int findTilt(struct TreeNode* root){
    int treeTilt = 0 ;
    if(root)
        postOrderTravelTilt(root , &treeTilt);
    return treeTilt;
}
