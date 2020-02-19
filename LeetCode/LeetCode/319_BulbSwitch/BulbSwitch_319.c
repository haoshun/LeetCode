//
//  BulbSwitch_319.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "BulbSwitch_319.h"

int bulbSwitch(int n) {
    if(n <= 0)
        return n;
    return (int)sqrt(n * 1.0);
}
