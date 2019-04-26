//
//  MaxCount_598.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/4/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "MaxCount_598.h"

int maxCount(int m, int n, int** ops, int opsSize, int* opsColSize){
    int minRow = m, minCol = n;
    for(int i = 0 ; i < opsSize ; ++i)
    {
        if(minRow > ops[i][0])
            minRow = ops[i][0];
        if(minCol > ops[i][1])
            minCol = ops[i][1];
    }
    
    return minCol * minRow;
}


