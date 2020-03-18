//
//  Defines.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/2/19.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "Defines.h"



struct TreeNode* createNode(int num)
{
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node -> val = num;
    node -> left = NULL;
    node -> right = NULL;
    return node;
}
