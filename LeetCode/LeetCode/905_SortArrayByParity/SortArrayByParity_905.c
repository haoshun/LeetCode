//
//  SortArrayByParity_905.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/4/13.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "SortArrayByParity_905.h"
#include "Tools.h"


int* sortArrayByParity(int* A, int ASize, int* returnSize){
    *returnSize = ASize;

    for(int i = 0 , j = ASize - 1 ; i < j ; ++i, --j)
    {
        while(i < j)
        {
            if(A[i] % 2)
                break;
            ++i;
        }
        while(i < j)
        {
            if(!(A[j] % 2))
                break;
            --j;
        }
        if(i < j)
        {
            swapTwoInt(A+i, A+j);
        }
    }
    return A;
}

