//
//  FindTheDifference_389.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "FindTheDifference_389.h"

//法一
char findTheDifference(char* s, char* t) {
    int s_len = strlen(s) , i;
    char theOne =0;
    for(i = 0 ; i<s_len ;++i)
    {
        theOne = theOne +t[i] - s[i];
    }
    return theOne+t[i];
}


//法二
//char findTheDifference(char* s, char* t) {
//    int s_len = strlen(s) , i;
//    char theOne =0;
//     for( i = 0 ; i<s_len ;++i)
//     {
//         theOne = theOne^ s[i] ^ t[i];
//     }
//    return theOne^t[i];
//}
