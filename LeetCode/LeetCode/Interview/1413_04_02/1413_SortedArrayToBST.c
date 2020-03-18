//
//  1413_SortedArrayToBST.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/16.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "1413_SortedArrayToBST.h"


struct TreeNode* realToBST(int* nums , int head , int rear)
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
                node -> left = realToBST(nums , head , middle - 1);
            
            if(middle < rear)
                node -> right = realToBST(nums , middle + 1 , rear);
        }
    }
    return node;
}



struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    if(!nums || !numsSize)
        return NULL;

    return realToBST(nums,0,numsSize-1);
}






