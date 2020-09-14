//
//  IsUgly_263.c
//  LeetCode
//
//  Created by Shun on 2019/4/2.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "IsUgly_263.h"

bool isUgly(int num) {
    if(num < 1)
        return false;
    if(num == 1)
        return true;
    int testNum[3] = {2,3,5};
    int tmp = num;
    while(tmp > 1)
    {
        for(int i = 0; i < 3 ; ++i)
        {
            if(!(tmp % testNum[i]))
            {
                tmp /= testNum[i];
                break;
            }
            if(i == 2)
                return false;
            
        }
        if(tmp == 1)
            return true;
    }
    return false;
}


