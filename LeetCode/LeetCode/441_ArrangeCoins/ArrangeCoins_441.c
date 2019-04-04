//
//  ArrangeCoins_441.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/4/4.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "ArrangeCoins_441.h"


int arrangeCoins(int n) {
    if(n <= 0)
        return 0;
    int count = 1;
    while(1)
    {
        n -= count++;
        if(n < count)
            break;
    }
    
    return count - 1;
}
