//
//  RomanToInt_13.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/22.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "RomanToInt_13.h"

int cardinalNumber(char c)
{
    switch (c)
    {
        case 'I' :
            return 1;
        case 'V' :
            return 5;
        case 'X' :
            return 10;
        case 'L' :
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}


int romanToInt(char* s) {
    int len = strlen(s) , result = 0;
    for(int i = len-1 , lastCN = 0 , currentCN = 0 ; i>=0 ; --i)
    {
        lastCN = cardinalNumber(s[i]);
        if(lastCN != 1)
        {
            if(i == 0)
                return result + lastCN;
            else
            {
                --i;
                currentCN = cardinalNumber(s[i]);
                if((currentCN == 1 && (lastCN == 5 || lastCN == 10)) || (currentCN == 10 && (lastCN == 50 || lastCN == 100)) || (currentCN == 100 && (lastCN == 500 || lastCN == 1000)))
                {
                    result += lastCN - currentCN;
                    continue;
                }
                result += lastCN;
                ++i;
            }
        }
        else
        {
            result += lastCN;
        }
    }
    return result;
}





