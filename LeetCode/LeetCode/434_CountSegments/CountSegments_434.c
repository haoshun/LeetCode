//
//  CountSegments_434.c
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "CountSegments_434.h"

//法一
// int countSegments(char* s) {
//     int len = strlen(s) , count = 0 , last = 0;
//     for(int i = 0 ; i<len ;++i)
//     {
//         if(count == 0 && s[i] == ' ')
//             continue;
//         if(s[i] == ' ')
//         {
//             if(last == 0)
//             {
//                 count++;
//                 last = 1;
//             }
//         }
//         else
//         {
//             if(count ==0)
//                 count++;
//             last = 0;
//         }
//         if(last == 1 && i ==len - 1)
//             count--;
//     }
//     return count;
// }

//法二
int countSegments(char* s) {
    int len = strlen(s) , count = 0 ;
    for(int i = 0 ; i<len ;++i)
    {
        if(s[i] == ' ')
            continue;
        count++;
        while(i<len && s[i] != ' ')
            ++i;
    }
    return count;
}
