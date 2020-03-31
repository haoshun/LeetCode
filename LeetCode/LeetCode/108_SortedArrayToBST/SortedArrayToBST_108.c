//
//  SortedArrayToBST_108.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/31.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "SortedArrayToBST_108.h"


struct TreeNode* realToBST_108(int* nums , int head , int rear)
{
    int middle = (head + rear) / 2;
    struct TreeNode* node = createNode(nums[middle]);
    
    if (rear > head)
    {
        if(middle == head)
            node -> right = createNode(nums[rear]);
        else
        {
            if(middle > head)
                node -> left = realToBST_108(nums , head , middle - 1);
            
            if(middle < rear)
                node -> right = realToBST_108(nums , middle + 1 , rear);
        }
    }
    return node;
}


struct TreeNode* sortedArrayToBST_108(int* nums, int numsSize){
    if(!nums || !numsSize)
        return NULL;

    return realToBST_108(nums,0,numsSize-1);
}


