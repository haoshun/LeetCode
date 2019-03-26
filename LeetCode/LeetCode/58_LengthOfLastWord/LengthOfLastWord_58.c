//
//  LengthOfLastWord_58.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "LengthOfLastWord_58.h"

int lengthOfLastWord(char* s) {
    int len =strlen(s) , end = -1;
    if(!s || len == 0)
        return 0;
    for(int i = len-1 ; i >= 0 ; --i)
    {
        if(s[i] != ' ')
        {
            if(end<0)
            {
                end = i;
            }
        }
        else
        {
            if(end>=0)
            {
                return end-i;
            }
        }
        if(i==0)
        {
            return end+1;
        }
    }
    return len;
    
}

