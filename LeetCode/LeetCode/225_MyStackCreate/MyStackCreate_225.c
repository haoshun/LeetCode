//
//  MyStackCreate_225.c
//  LeetCode
//
//  Created by Shun on 2019/3/27.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "MyStackCreate_225.h"

typedef int DataType;

enum {
    M_SUCCEED =1,
    M_FAULT = 0
}MyStack_Status;

typedef struct node{
    DataType data;
    struct node * next;
} MyStack;

/** Initialize your data structure here. */

//只是普通方法实现栈 并不是用队列数据结构
MyStack* myStackCreate(int maxSize) {
    MyStack* stack = (MyStack*) malloc(sizeof(MyStack));
    if(stack)
    {
        stack->next = NULL;
        return stack;
    }
    return NULL;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
    MyStack* newData = (MyStack*) malloc(sizeof(MyStack));
    if(newData)
    {
        newData -> data = x;
        newData ->next = obj ->next;
        obj -> next = newData;
    }
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
    return (obj->next == NULL);
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
    if(!myStackEmpty(obj))
    {
        MyStack* tmp = obj ->next;
        DataType result = tmp -> data;
        obj->next = tmp -> next;
        free(tmp);
        return result;
    }
    return M_FAULT;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
    if(!myStackEmpty(obj))
    {
        return obj->next->data;
    }
    return M_FAULT;
}



void myStackFree(MyStack* obj) {
    while(!myStackEmpty(obj))
    {
        myStackPop(obj);
    }
    free(obj);
}


