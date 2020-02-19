//
//  AddDigits_258.c
//  LeetCode
//
//  Created by Shun on 2019/3/26.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "AddDigits_258.h"

int addDigits(int num) {
    return num ? (num - 1) % 9 + 1 : 0;
}

