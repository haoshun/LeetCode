//
//  BulbSwitch_319.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/28.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "BulbSwitch_319.h"

int bulbSwitch(int n) {
    if(n <= 0)
        return n;
    return (int)sqrt(n * 1.0);
}
