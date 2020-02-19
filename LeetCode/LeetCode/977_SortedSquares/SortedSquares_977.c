//
//  SortedSquares_977.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "SortedSquares_977.h"

int* sortedSquares(int* A, int ASize, int* returnSize) {
    if(!A || ASize == 0 )
        return NULL;
    *returnSize = ASize;
    int * returnNums = (int *) malloc(sizeof(int) * ASize);
    
    for(int head = 0 ,rear = ASize - 1, i = ASize - 1 ; head <= rear && i >= 0 ; --i )
    {
        if(abs(A[head])>= abs(A[rear]))
        {
            returnNums[i] = A[head]*A[head];
            head++;
        }
        else
        {
            returnNums[i] = A[rear]*A[rear];
            rear--;
        }
    }
    return returnNums;
    
}

