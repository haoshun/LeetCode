//
//  LevelOrder_102.h
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/21.
//  Copyright © 2020 desezed. All rights reserved.
//

#ifndef LevelOrder_102_h
#define LevelOrder_102_h

#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"
struct QueueNode {
      struct TreeNode *treeNode;
      struct QueueNode *next;
 };

  struct HS_Queue {
      struct QueueNode *head;
      struct QueueNode *rear;
      int length;
 };

 



 struct HS_Array_Node {
      struct HS_Array_Node* next;
      int* vaules;
      int length;
 };


int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes);

#endif /* LevelOrder_102_h */
