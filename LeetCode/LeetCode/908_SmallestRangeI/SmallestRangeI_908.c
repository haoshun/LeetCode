//
//  SmallestRangeI_908.c
//  LeetCode
//
//  Created by 郝 源顺 on 2019/5/4.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "SmallestRangeI_908.h"

int smallestRangeI(int* A, int ASize, int K){
    int A_max = A[0] , A_min = A[0];
    for(int i = 0 ; i < ASize ; ++i)
    {
        if(A_max < A[i])
            A_max = A[i];
        if(A_min > A[i])
            A_min = A[i];
    }
    if(A_max - A_min <= K * 2)
        return 0;
    return A_max - A_min - 2 * K;
}

