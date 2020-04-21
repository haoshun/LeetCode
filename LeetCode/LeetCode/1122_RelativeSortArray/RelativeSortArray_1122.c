//
//  RelativeSortArray_1122.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/4/21.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "RelativeSortArray_1122.h"

int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize){
    int * tmpArray = (int *) malloc(sizeof(int) * 1001);
    memset(tmpArray, 0, 1001*sizeof(int));
    if(tmpArray)
    {
        for(int i = 0 ; i < arr1Size ; ++i)
        {
            tmpArray[arr1[i]] ++;
        }
        int k = 0;
        for(int i = 0 ; i < arr2Size ; ++i)
        {
            while(tmpArray[arr2[i]])
            {
                arr1[k++] = arr2[i];
                --tmpArray[arr2[i]];
            }
        }
        for(int i = 0 ; i < 1001 ; ++i)
        {
            while(tmpArray[i])
            {
                arr1[k++] = i;
                --tmpArray[i];
            }
        }
        free(tmpArray);
    }
    *returnSize = arr1Size;
    return arr1;
}

