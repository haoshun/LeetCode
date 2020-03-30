//
//  NumTrees_96.c
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/30.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "NumTrees_96.h"

int numTrees(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    int len = n / 2;
    int sum = 0;
    for(int i = 1 ; i <= len ; ++i)
        sum += 2 * (i<=2 ? numTrees(n - i) : numTrees(n - i) * numTrees(i - 1));
    if(n % 2)
        sum += pow(numTrees(n / 2),2);
    return sum;
}

