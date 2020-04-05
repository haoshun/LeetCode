//
//  InvertTree_226.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/4/5.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "InvertTree_226.h"

 void postTravelInvert(struct TreeNode* root)
 {
    if(root -> left)
        postTravelInvert(root -> left);
    
    if(root -> right)
        postTravelInvert(root -> right);
    
    struct TreeNode* tmp = root -> left;
    root -> left = root -> right;
    root -> right = tmp;
 }


 void preTravelInvert(struct TreeNode* root)
 {
    struct TreeNode* tmp = root -> left;
    root -> left = root -> right;
    root -> right = tmp;

    if(root -> left)
        preTravelInvert(root -> left);
    
    if(root -> right)
        preTravelInvert(root -> right);
    
 }

  void inTravelInvert(struct TreeNode* root)
 {
    if(root -> left)
        inTravelInvert(root -> left);
    
    struct TreeNode* tmp = root -> left;
    root -> left = root -> right;
    root -> right = tmp;

    if(root -> right)
        inTravelInvert(root -> right);
    
 }

struct TreeNode* invertTree(struct TreeNode* root){
    if(root)
        //postTravelInvert(root);
        //preTravelInvert(root);
        inTravelInvert(root);
    return root;
}

