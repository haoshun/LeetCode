//
//  SumEvenAfterQueries_985.c
//  LeetCode
//
//  Created by Shun on 2019/3/29.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "SumEvenAfterQueries_985.h"

int* sumEvenAfterQueries(int* A, int ASize, int** queries, int queriesRowSize, int *queriesColSizes, int* returnSize) {
    if(!A || ASize == 0 || !queries || queriesRowSize == 0 || !queriesColSizes ||(*queriesColSizes) == 0)
        return NULL;
    
    int * answer = (int *) malloc(queriesRowSize * sizeof(int));
    if(!answer)
        return NULL;
    
    int lastSum = 0 ;
    *returnSize = queriesRowSize;
    for(int i = 0 ; i < ASize ; ++i)
        if(A[i] % 2 == 0)
            lastSum += A[i];
    
    for(int i = 0 , tmp = 0 ; i < queriesRowSize ; ++i)
    {
        tmp = queries[i][0] + A[queries[i][1]];
        if(A[queries[i][1]] % 2 == 0)
        {
            if(tmp % 2 == 0)
            {
                lastSum += queries[i][0];
            }
            else
            {
                lastSum -= A[queries[i][1]];
            }
        }
        else
        {
            if(tmp % 2 == 0)
            {
                lastSum += tmp;
            }
        }
        answer[i] = lastSum;
        A[queries[i][1]] = tmp;
    }
    return answer;
}

