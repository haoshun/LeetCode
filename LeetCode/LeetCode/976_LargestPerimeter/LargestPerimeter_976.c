//
//  LargestPerimeter_976.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/5/8.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "LargestPerimeter_976.h"
#include "QuickSort.h"


int largestPerimeter(int* A, int ASize){
    if(ASize < 3)
        return 0;
    
    quickSort(A , 0 , ASize-1);
    for(int i = ASize - 1 ; i >=2 ; --i)
        if(A[i] < A[i-1] + A[i-2])
            return A[i] + A[i-1] + A[i-2];
    return 0;
}


