//
//  CanTransform_777.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "CanTransform_777.h"

bool canTransform(char* start, char* end) {
    if(!start || !end)
        return false;
    
    long s_len = strlen(start);
    long e_len = strlen(end);
    
    if(s_len != e_len)
        return false;
    
    int i = 0 , j = 0;
    
    while(i < s_len && j < e_len)
    {
        while(i < s_len && start[i] == 'X')
            ++i;
        while(j < e_len && end[j] == 'X')
            ++j;
        if(start[i] != end[j])
            return false;
        if(start[i] == 'L' && i < j)
            return false;
        if(start[i] == 'R' && i > j)
            return false;
        ++i; ++j;
    }
    
    return true;
}

