//
//  IsIdealPermutation.c
//  LeetCode
//
//  Created by Shun on 2019/5/5.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "IsIdealPermutation.h"

bool isIdealPermutation(int* A, int ASize){
    if(ASize < 3)
        return true;
    
    for(int i = ASize -1 , min = ASize -1 ; i >= 2 ; --i)
    {
        if(min > A[i])
            min = A[i];
        if(min < A[i-2])
            return false;
    }
    return true;
}


