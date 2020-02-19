//
//  MyAtoi_8.c
//  LeetCode
//
//  Created by Shun on 2019/4/26.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "MyAtoi_8.h"

bool isNum(char n)
{
    return n>='0' && n <='9' ? true : false;
}

int myAtoi(char * str){
    if(!str || strlen(str) == 0)
        return 0;
    
    int head = 0 , len = strlen(str);
    while(str[head] == ' ' && head < len)
        head++;
    if(head == len)
        return 0;
    
    int sign = 0;
    if(str[head] == '-')
    {
        sign = -1;
        head++;
    }
    else if(str[head] == '+')
    {
        sign = 1;
        head++;
    }
    if(head == len)
        return 0;
    
    if(!isNum(str[head]))
        return 0;
    
    while(str[head] == '0' && head < len)
        head++;
    if(head == len || !isNum(str[head]))
        return 0;
    
    int count = 0;
    while(head + count < len && isNum(str[head + count]) && count < 10)
    {
        count++;
    }
    
    
    if(count == 10)
    {
        char tmp[11];
        for(int i = 0 ; i < count ; ++i)
            tmp[i] = str[head+i];
        tmp[count] = '\0';
        
        if(sign >= 0)
        {
            char max[11] = "2147483647\0";
            if(strcmp(tmp , max) > 0)
                return INT_MAX;
            if(head + count < len && isNum(str[head+count]))
                return INT_MAX;
        }
        else
        {
            char min[11] = "2147483648\0";
            if(strcmp(tmp , min) >= 0)
                return INT_MIN;
            if(head + count < len && isNum(str[head+count]))
                return INT_MIN;
        }
    }
    
    int num = 0;
    
    for(int i = 0 ; i < count ; ++i)
    {
        num *= 10;
        num += str[head+i] - '0';
    }
    
    
    return sign >= 0 ? num : sign * num;
    
}

