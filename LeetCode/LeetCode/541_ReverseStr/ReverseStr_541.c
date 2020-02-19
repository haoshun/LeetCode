//
//  ReverseStr_541.c
//  LeetCode
//
//  Created by Shun on 2019/3/21.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "ReverseStr_541.h"
#include "Tools.h"

//541 反转字符串II
char* reverseStr(char* s, int k)
{
    unsigned long strLength = strlen(s);
    int i = 0;
    do
    {
        if (i +k>strLength)
        {
            RotateString(s, i, strLength-1);
        }
        //        else if (i+2*k>strLength)
        //        {
        //            RotateString(s, i, i+k-1);
        //        }
        else
        {
            RotateString(s, i, i+k-1);
        }
        i += 2*k;
    } while (i<strLength);
    
    return s;
}


