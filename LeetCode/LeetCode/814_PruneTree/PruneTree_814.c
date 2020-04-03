//
//  PruneTree_814.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/4/3.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "PruneTree_814.h"


struct TreeNode* pruneTree(struct TreeNode* root){
    if(root -> left)
        root -> left = pruneTree(root -> left);
    
    if(root -> right)
        root -> right = pruneTree(root -> right);

    return (!root -> left && !root -> right && root -> val == 0) ? NULL : root;
}

