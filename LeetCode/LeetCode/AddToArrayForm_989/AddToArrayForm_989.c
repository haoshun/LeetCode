//
//  AddToArrayForm_989.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/19.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "AddToArrayForm_989.h"


int* getKArray(int K , int * KSize)
{
    if(K < 0)
        return NULL;
    int digitCount = 0;
    for(int tk = K; tk > 0;++digitCount)
        tk /= 10;
    
    int * kArray = (int *) malloc(sizeof(int)*digitCount);
    if(!kArray)
        return NULL;
    
    for(int i = digitCount - 1, tk = K ; i >= 0 ; --i, tk /= 10)
        kArray[i] = tk % 10;
    
    *KSize = digitCount;
    return kArray;
}

int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {
    if(!A || !ASize)
        return NULL;
    if(K == 0)
    {
        *returnSize = ASize;
        return A;
    }
    
    int kSize = 0, carry = 0;
    int * kArray = getKArray(K , &kSize);
    *returnSize = ASize > kSize ? ASize : kSize;
    int * resultArray = ASize > kSize ? A : kArray;
    
    
    for(int i = ASize - 1, j = kSize -1, sum = 0, r = *returnSize - 1; i >= 0 && j >= 0 ; --i, --j)
    {
        sum = A[i] + kArray[j] + carry;
        carry = sum / 10;
        resultArray[r--] = sum % 10;
        if(i == 0 && j == 0)
            break;
        if(!i)
        {
            while(j > 0)
            {
                sum = kArray[--j] + carry;
                carry = sum / 10;
                resultArray[r--] = sum % 10;
            }
            break;
        }
        if(!j)
        {
            while(i > 0)
            {
                sum = A[--i] + carry;
                carry = sum / 10;
                resultArray[r--] = sum % 10;
            }
            break;
        }
    }

    if(carry)
        (*returnSize)++;
    
     int * returnArray =(int *) malloc(sizeof(int) * (*returnSize));
    returnArray[0] = carry;
    
    for (int i = carry ; i < *returnSize; ++i) {
        returnArray[i] = resultArray[i-carry];
    }
    
    free(kArray);
    return returnArray;

}



