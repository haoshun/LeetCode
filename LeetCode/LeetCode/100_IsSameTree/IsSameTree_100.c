//
//  IsSameTree_100.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/31.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "IsSameTree_100.h"


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p == NULL && q == NULL)
        return true;
    if(!p || !q)
        return false;
    
    return (p -> val == q -> val) && isSameTree(p -> left , q -> left) && isSameTree(p -> right , q -> right);
}

