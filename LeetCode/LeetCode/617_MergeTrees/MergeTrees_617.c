//
//  MergeTrees_617.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/31.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "MergeTrees_617.h"


struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2){
    
    if(!t1 && !t2)
        return NULL;
    if(!t1 && t2)
        return t2;
    if(t1 && !t2)
        return t1;

    t1 -> val += t2 -> val;
    t1 ->left = mergeTrees(t1 -> left , t2 -> left);
    t1 ->right = mergeTrees(t1 -> right , t2 -> right);

    return t1;
}
