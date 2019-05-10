//
//  BinaryGap_868.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/5/10.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "BinaryGap_868.h"


int binaryGap(int N){
    int maxGap = 0 ;
    
    while(N && !(N % 2))
        N /= 2;
    
    if ( N > 1 ) {
        for(int count = 1 ; N > 0 ; N /= 2 )
        {
            if(N % 2)
            {
                if(maxGap < count)
                    maxGap = count;
                count = 1;
            }
            else
                ++count;
        }
    }
    
    return maxGap;
}


