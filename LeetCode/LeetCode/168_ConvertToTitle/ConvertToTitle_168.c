//
//  ConvertToTitle_168.c
//  LeetCode
//
//  Created by Shun on 2019/3/25.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "ConvertToTitle_168.h"

char* convertToTitle(int n) {
    if(n <= 0)
        return NULL;
    int * tmpNum = (int *) malloc(sizeof(int) * 10);
    int i = 0;
    while(n)
    {
        tmpNum[i] = n % 26;
        n /= 26;
        if(!tmpNum[i])
            n--;
        ++i;
    }
    
    char * result = (char *) malloc(sizeof(char) * (i + 1));
    for(int j = 0 ; j < i ; ++j)
        result[j] = 'A' + (tmpNum[i-j-1] -1 + 26) % 26;
    result[i] = '\0';
    
    free(tmpNum);
    
    return result;
}

