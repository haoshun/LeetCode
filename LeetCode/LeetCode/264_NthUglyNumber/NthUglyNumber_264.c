//
//  NthUglyNumber_264.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/5/5.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "NthUglyNumber_264.h"
#include <stdlib.h>

int nthUglyNumber(int n){
    if(n == 1)
        return 1;
    int l1 , l2 , l3 , result;
    int * uglyArray = (int *)malloc(sizeof(int) * n);
    uglyArray[0] = 1;
    for(int index1 = 0 , index2 = 0 , index3 = 0 , i = 1; i < n ; ++i)
    {
        l1 = uglyArray[index1] * 2;
        l2 = uglyArray[index2] * 3;
        l3 = uglyArray[index3] * 5;
        
        if(l1 <= l2)
        {
            if(l1 <= l3)
            {
                uglyArray[i] = l1;
                index1++;
                if(l1 == l2)
                    index2++;
                if(l1 == l3)
                    index3++;
            }
            else
            {
                uglyArray[i] = l3;
                index3++;
            }
        }
        else
        {
            if(l2 <= l3)
            {
                uglyArray[i] = l2;
                index2++;
                if(l2 == l3)
                    index3++;
            }
            else
            {
                uglyArray[i] = l3;
                index3++;
            }
        }
    }
    result = uglyArray[n-1];
    free(uglyArray);
    return result;
}




