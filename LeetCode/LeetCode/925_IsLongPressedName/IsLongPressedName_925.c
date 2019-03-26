//
//  IsLongPressedName_925.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/21.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "IsLongPressedName_925.h"

bool isLongPressedName(char* name, char* typed) {
    int n_len = strlen(name) , t_len = strlen(typed);
    if(!name || !typed || n_len == 0 || t_len == 0 || t_len < n_len || name[0] != typed[0])
        return false;
    
    for(int i = 0 , j = 0 ; i < n_len && j < t_len ; )
    {
        if(name[i] != typed[j])
        {
            if(typed[j] != name[i-1])
                return false;
        }
        else
            ++i;
        
        ++j;
        
        if(j == t_len && i != n_len)
            return false;
        if (i == n_len)
        {
            while (j < t_len)
            {
                if (name[i-1] != typed[j]) {
                    return false;
                }
                ++j;
            }
        }
    }
    return true;
}


