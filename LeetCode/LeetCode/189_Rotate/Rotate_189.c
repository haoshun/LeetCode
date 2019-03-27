//
//  Rotate_189.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/27.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "Rotate_189.h"


int greatestCommonDivisor(int x , int y)
{
    int z = y;
    while(x%y!=0)
    {
        z = x%y;
        x = y;
        y = z;
    }
    return z;
}
//法一
void rotate(int* nums, int numsSize, int k) {
    if(!nums || numsSize < 2 || k == 0)
        return;
    
    int rk = k % numsSize;
    if(rk == 0 )
        return;
    
    int loop_count = greatestCommonDivisor(numsSize , rk);
    
    for(int start = 0 ; start < loop_count ; ++start)
    {
        int next = (start + rk) % numsSize ;
        do{
            nums[start] = nums[start] ^ nums[next];
            nums[next] = nums[start] ^ nums[next];
            nums[start] = nums[start] ^ nums[next];
            next = (next + rk) % numsSize;
        }while(next != start);
    }
}


