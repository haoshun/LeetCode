//
//  PowerfulIntegers_970.c
//  LeetCode
//
//  Created by Shun on 2019/5/10.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "PowerfulIntegers_970.h"
#include "stdlib.h"

int* powerfulIntegers(int x, int y, int bound, int* returnSize){
    if(bound <= 1)
        return NULL;
    
    int xCount = 1 , xPowers[20] ={1};
    if(x > 1)
    {
        int xPower = x;
        while(xPower < bound)
        {
            xPowers[xCount++] = xPower;
            xPower *= x;
        }
    }
    
    int yCount = 1 , yPowers[20] ={1};
    if(y > 1)
    {
        int yPower = y;
        while(yPower < bound)
        {
            yPowers[yCount++] = yPower;
            yPower *= y;
        }
    }
    
    int * tmpArray = (int *) malloc(sizeof(int) * (bound));
    memset(tmpArray , 0 , bound *sizeof(int));
    int numsCount = 0;
    
    for(int i = 0 ; i < xCount ; ++i)
    {
        for(int j = 0 ; j < yCount ; ++j)
        {
            if(xPowers[i] + yPowers[j] <= bound)
            {
                if(!tmpArray[xPowers[i] + yPowers[j] -1])
                    numsCount++;
                tmpArray[xPowers[i] + yPowers[j] -1] = 1;
            }
        }
    }
    
    int * returnArray = (int*) malloc(sizeof(int) * numsCount);
    for(int i = 0 , count = 0 ; i < bound ; ++i)
    {
        if(tmpArray[i])
        {
            returnArray[count++] = i + 1;
        }
    }
    *returnSize = numsCount;
    free(tmpArray);
    return returnArray;
}


