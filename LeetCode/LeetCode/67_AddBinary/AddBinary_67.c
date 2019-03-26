//
//  AddBinary_67.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "AddBinary_67.h"

char* addBinary(char* a, char* b) {
    int a_len  = strlen(a) , b_len = strlen(b) , r_len;
    if(a_len>b_len)
    {
        r_len = a_len +1;
    }
    else
    {
        r_len = b_len +1;
    }
    char * returnChar = (char *) malloc((r_len+1)*sizeof(char));
    returnChar[r_len] = '\0';
    for(int i = r_len -1 , j = a_len - 1 , k = b_len - 1 , t = 0; i>=0 ; --i)
    {
        if(i == 0)
        {
            if(t)
            {
                returnChar[i] ='1';
                break;
            }
            else
                return returnChar+1;
        }
        if(j == -1)
        {
            if(b[k]-'0' +t ==2)
            {
                t = 1;
                returnChar[i] = '0';
            }
            else
            {
                returnChar[i] = b[k] +t;
                t = 0;
            }
            --k;
            continue;
        }
        if(k == -1)
        {
            if(a[j]-'0' +t ==2)
            {
                t = 1;
                returnChar[i] = '0';
            }
            else
            {
                returnChar[i] = a[j] +t;
                t = 0;
            }
            --j;
            continue;
        }
        if((a[j] -'0') + (b[k] -'0') + t >=2 )
        {
            returnChar[i] = (a[j] -'0') + (b[k] -'0') + t - 2 +'0';
            t = 1;
        }
        else
        {
            returnChar[i] = (a[j] -'0') + (b[k] -'0') + t +'0';
            t = 0;
        }
        --j;
        --k;
    }
    return returnChar;
}

