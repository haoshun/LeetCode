//
//  NumRabbits_781.c
//  LeetCode
//
//  Created by Shun on 2019/5/6.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "NumRabbits_781.h"

int numRabbits(int* answers, int answersSize){
    if(!answers || answersSize == 0)
        return 0;
    
    int numCounts[1000] = {0};
    for(int i = 0 ; i < answersSize ; ++i)
        numCounts[answers[i]]++;
    
    int minCountRabbits = 0;
    for(int i = 0 ; i < 1000 ; ++i)
        if(numCounts[i])
            minCountRabbits += (numCounts[i] / (i + 1) + (numCounts[i] % (i + 1) ? 1 : 0)) * (i + 1) ;
    return minCountRabbits;
}

