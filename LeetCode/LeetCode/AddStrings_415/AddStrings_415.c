//
//  AddStrings_415.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/19.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "AddStrings_415.h"

char* addStrings(char* num1, char* num2) {
    if(!num1 && !num2)
        return NULL;
    
    int num1_l = strlen(num1) , num2_l = strlen(num2) , carry = 0;
    
    int returnSize = num1_l > num2_l ? num1_l : num2_l;
    char * resultArray = num1_l > num2_l ? num1 : num2;
    
    
    for(int i = num1_l - 1, j = num2_l -1, sum = 0, r = returnSize - 1; i >= 0 && j >= 0 ; --i, --j)
    {
        sum = num1[i] - '0' + num2[j] - '0' + carry;
        carry = sum / 10;
        resultArray[r--] = sum % 10 + '0';
        if(i == 0 && j == 0)
            break;
        if(!i)
        {
            while(j > 0)
            {
                sum = num2[--j] - '0' + carry;
                carry = sum / 10;
                resultArray[r--] = sum % 10 + '0';
            }
        }
        if(!j)
        {
            while(i > 0)
            {
                sum = num1[--i] - '0' + carry;
                carry = sum / 10;
                resultArray[r--] = sum % 10 + '0';
            }
        }
    }
    
    if(carry)
        returnSize++;
    
    char * returnArray =(char *) malloc(sizeof(char) * returnSize);
    returnArray[0] = carry + '0';
    
    for (int i = carry ; i < returnSize; ++i) {
        returnArray[i] = resultArray[i-carry];
    }
    
    return returnArray;
}



