//
//  SelfDividingNumbers_728.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/4/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "SelfDividingNumbers_728.h"
#include <stdlib.h>

bool isSelfDividingNumber(int num)
{
    if(num == 0 || num % 10 == 0)
        return false;
    int n = num , q = 0;
    while(n % 10)
    {
        q = n % 10;
        if(num % q)
            return false;
        n /= 10;
    }
    return n ? false : true;
}


int* selfDividingNumbers(int left, int right, int* returnSize) {
    int count = 0 , index = 0 , len = right - left + 1 , head = left;
    char * array = (char *) malloc(sizeof(char) * (len + 1));
    
    while(head <= right)
    {
        if(isSelfDividingNumber(head++))
        {
            count++;
            array[index] = '1';
        }
        else
            array[index] = '0';
        
        index++;
    }
    int * nums = NULL;
    if(count > 0)
    {
        nums = (int *) malloc(sizeof(int) * count);
        int i = 0;
//        for (int i = 0; i < len;  ++i) {
//            printf("%c " , array[i]);
//        }
//        printf("%s \n" , array);
        for(index = 0 ; index < len ; ++index)
        {
            if(array[index] == '1')
                nums[i++] = left + index;
        }
    }
    
    free(array);
    *returnSize = count;
    return nums;
}
