//
//  IsSubtree_572.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/26.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "IsSubtree_572.h"

void postOrderTraversal_additional(struct TreeNode* root, int* count)
{
    (*count)++;
    (*count)++;
    
    if(root -> left)
        postOrderTraversal_additional(root -> left,count);
    else
        (*count)++;
    
    if(root -> right)
        postOrderTraversal_additional(root -> right,count);
    else
        (*count)++;
}

void outPutTraversal(struct TreeNode* root, int* returnArray , int* index)
{
    returnArray [(*index)++] = -3;
    returnArray [(*index)++] = root -> val;
    
    if(root -> left)
        outPutTraversal(root -> left,returnArray,index);
    else
        returnArray [(*index)++] = -1;
    
    if(root -> right)
        outPutTraversal(root -> right,returnArray,index);
    else
        returnArray [(*index)++] = -2;
}


bool isSubtree(struct TreeNode* s, struct TreeNode* t){

    if(!s || !t)
        return false;
    
    int s_len , t_len = 0;

    postOrderTraversal_additional(s , &s_len);
    postOrderTraversal_additional(t , &t_len);

    if(s_len < t_len)
        return false;

    int * s_PostOrderArray = (int*)malloc(s_len * sizeof(int));
    int * t_PostOrderArray = (int*)malloc(t_len * sizeof(int));

    int index = 0;
    outPutTraversal(s,s_PostOrderArray,&index);
    index = 0;
    outPutTraversal(t,t_PostOrderArray,&index);
    bool returnFlag = false;

    for(int i = 0 , j = 0  , k = 0 ; i < s_len - t_len + 1; ++i)
    {
        if(s_PostOrderArray[i] != t_PostOrderArray[j])
        {
            continue;
        }
        else
        {
            k = i;
            while(j < t_len)
            {
                if(s_PostOrderArray[k] != t_PostOrderArray[j])
                {
                    break;
                }
                ++k;
                ++j;
            }
            if(j == t_len)
            {
                returnFlag = true;
                break;
            }
            else
            {
                j = 0;
            }
        }
    }
    
    printArray(s_PostOrderArray, s_len);
    printArray(t_PostOrderArray, t_len);
    
    free(s_PostOrderArray);
    free(t_PostOrderArray);

    return returnFlag;
}

