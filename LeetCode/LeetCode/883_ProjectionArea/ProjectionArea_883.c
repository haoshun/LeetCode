//
//  ProjectionArea_883.c
//  LeetCode
//
//  Created by Shun on 2019/5/7.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "ProjectionArea_883.h"
#include <stdlib.h>


int projectionArea(int** grid, int gridSize, int* gridColSize){
    if(!grid || gridSize == 0 || gridColSize == 0)
        return 0;
    int xy = 0 , xz = 0 , yz = 0;
    int * colMax = (int *)malloc(sizeof(int) * (*gridColSize));
    memset(colMax, 0, (*gridColSize)*sizeof(int));
    
    for(int i = 0 ; i < gridSize ; ++i)
    {
        for(int j = 0 , maxj = 0 ; j < *gridColSize ; ++j)
        {
            if(grid[i][j])
                xy++;
            if(grid[i][j] > maxj)
                maxj = grid[i][j];
            if(j == *gridColSize - 1)
                xz += maxj;
            if(grid[i][j] > colMax[j])
                colMax[j] = grid[i][j];
        }
    }
    for(int i = 0 ; i < *gridColSize ; ++i)
        yz += colMax[i];
    
    free(colMax);
    
    return xy + xz + yz;
}
