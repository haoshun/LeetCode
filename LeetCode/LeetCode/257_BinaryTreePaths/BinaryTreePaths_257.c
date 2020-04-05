//
//  BinaryTreePaths_257.c
//  LeetCode
//
//  Created by 郝 源顺 on 2020/4/4.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "BinaryTreePaths_257.h"


struct LinkListNode{
     struct TreeNode * node;
     struct LinkListNode * next;
     struct LinkListNode * before;
 };

struct LinkListInfor{
    struct LinkListNode * currentNode;
    struct LinkListNode * head;
    struct LinkListInfor * next;
    int length;
};

struct LinkListInfor * createlinListInfor()
{
    struct LinkListInfor * info = (struct LinkListInfor *) malloc(sizeof(struct LinkListInfor));
    if(info)
    {
        info -> currentNode = NULL;
        info -> head = NULL;
        info -> next = NULL;
        info -> length = 0;
    }
    return info;
}

struct LinkListInfor * copylinListInfor (struct LinkListInfor * original)
{
    struct LinkListInfor * info = (struct LinkListInfor *) malloc(sizeof(struct LinkListInfor));
    if(info)
    {
        info -> currentNode = original -> currentNode;
        info -> head = original -> head;
        info -> next = original -> next;
        info -> length = original -> length;
    }
    return info;
}

struct LinkListNode * createLinkListNode (struct TreeNode * treeNode)
{
    struct LinkListNode * node = (struct LinkListNode *) malloc(sizeof(struct LinkListNode));
    if(node)
    {
        node -> node = treeNode;
        node -> next = NULL;
        node -> before = NULL;
    }
    return node;
}

void pushNode(struct LinkListInfor * info,struct LinkListNode * node)
{
    if(node && info)
    {
        node -> before = info -> currentNode;
        if(info -> length)
            info -> currentNode -> next = node;
        info -> currentNode = node;
        info -> length ++;
    }
}

void popNode(struct LinkListInfor * info)
{
    if(info)
    {
        if(info -> length)
        {
            struct LinkListNode * tmpNode = info -> currentNode;
            info -> currentNode = info -> currentNode -> before;
            info -> currentNode -> next = NULL;
            info -> length --;
            free(tmpNode);
        }
    }
}

void preOrderTravelForTreePaths(struct TreeNode* root, int * leaves , struct LinkListInfor ** info)
{
    struct LinkListNode * newNode = createLinkListNode(root);
    pushNode(*info , newNode);
    
    if(!root -> left && !root -> right)
    {
        (*leaves) ++;
        struct LinkListInfor * newInfor = copylinListInfor(*info);
        (*info) -> next = newInfor;
        info = &newInfor;
    }

    if(root -> left)
    {
        preOrderTravelForTreePaths(root -> left , leaves, info);
        //弹栈
        popNode(*info);
    }

    if(root -> right)
    {
        preOrderTravelForTreePaths(root -> right , leaves , info);
        //弹栈
        popNode(*info);
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** binaryTreePaths(struct TreeNode* root, int* returnSize){
    if(!root)
    {
        *returnSize = 0;
        return NULL;
    }
    struct LinkListInfor * head  = createlinListInfor();
    struct LinkListInfor * info = head;
    
    preOrderTravelForTreePaths(root , returnSize , &info);

    return NULL;
}

