//
//  IsValidBST_98.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/4/8.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "IsValidBST_98.h"


struct ListTreeNode {
    struct TreeNode * treeNode;
    struct ListTreeNode * next;
};

struct ListTreeNode * createListTreeNode(struct TreeNode * treeNode)
{
    struct ListTreeNode * node = (struct ListTreeNode *)malloc(sizeof(struct ListTreeNode));
    if(node)
    {
        node -> treeNode = treeNode;
        node -> next = NULL;
    }
    return node;
}

void inOrderTravelForTree(struct TreeNode* root , struct ListTreeNode ** node, int * count)
{
    if(root -> left)
        inOrderTravelForTree(root -> left , node , count);

    struct ListTreeNode * newNode = createListTreeNode(root);
    (*node) -> next = newNode;
    *node = newNode;
    (*count) ++;

    if(root -> right)
        inOrderTravelForTree(root -> right , node , count);
}

bool isValidBST(struct TreeNode* root){

    if(!root || (!root -> left && !root -> right))
        return true;

    int count = 0;
    struct ListTreeNode * listNode = createListTreeNode(NULL);
    struct ListTreeNode * head = listNode;
    
    inOrderTravelForTree(root , &listNode , &count);

    struct ListTreeNode * cursor = head -> next -> next;
    for(int i = 1 , val = head -> next -> treeNode -> val ; i < count ; ++i , val = cursor -> treeNode -> val, cursor = cursor -> next)
    {
        if(val >= cursor -> treeNode -> val)
            break;
        if(i == count -1)
            return true;
    }

    return false;

}

