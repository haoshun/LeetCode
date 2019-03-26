//
//  ComputeArea_223.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "ComputeArea_223.h"

int c_max (int a , int b)
{
    return a > b ? a : b;
}

int c_min (int a , int b)
{
    return a < b ? a : b;
}

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    if(E >= C || A >= G || B >= H || F >= D)
        return (D - B) * (C - A) + (G - E)*(H - F);
    return(D - B) * (C - A) - (c_min(C , G) - c_max(A , E)) * (c_min(H , D) - c_max(F , B)) + (G - E)*(H - F);
}

