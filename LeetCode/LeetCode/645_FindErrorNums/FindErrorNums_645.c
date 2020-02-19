//
//  FindErrorNums_645.c
//  LeetCode
//
//  Created by 郝 源顺 on 2019/5/2.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "FindErrorNums_645.h"
#include <stdlib.h>

int* findErrorNums(int* nums, int numsSize, int* returnSize){
    int * resultNums = (int *) malloc(sizeof(int) * 2);
    int rSize = 2;
    *returnSize =  rSize;
    char * tmpArray = (char *) malloc(sizeof(char) * numsSize);
    memset(tmpArray, '0', numsSize*sizeof(char));
    for(int i = 0 ; i < numsSize ; ++i)
    {
        if(tmpArray[nums[i]-1] == '0')
            tmpArray[nums[i] - 1] = '1';
        else
            resultNums[0] = nums[i];
    }
    for(int i = 0 ; i < numsSize ; ++i)
        if(tmpArray[i] == '0')
            resultNums[1] = i + 1;
    free(tmpArray);
    return resultNums;
}

