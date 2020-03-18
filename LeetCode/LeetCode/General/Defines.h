//
//  Defines.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/2/19.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef Defines_h
#define Defines_h

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* createNode(int num);

#endif /* Defines_h */
