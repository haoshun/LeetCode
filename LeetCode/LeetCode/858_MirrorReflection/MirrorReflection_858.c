//
//  MirrorReflection_858.c
//  LeetCode
//
//  Created by Shun on 2019/5/10.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "MirrorReflection_858.h"
#include "stdbool.h"


//法一
int mirrorReflection(int p, int q){
    if(!q)
        return 0;
    
    if(!(p % q))
        return p / q % 2 ? 1 : 2;
    
    int result = 0 , left_or_right = 0 , point = p  , up_or_down = 1; // 0代表左侧 1代表右侧 1代表up 0代表down
    while(true)
    {
        if(left_or_right)
        {
            if(up_or_down)
            {
                if(point - q < 0)
                {
                    point = q - point;
                    up_or_down = 0;
                }
                else
                {
                    point -= q;
                }
            }
            else
            {
                if(point + q > p)
                {
                    point = 2 * p -  point - q;
                    up_or_down = 1;
                }
                else
                {
                    point += q;
                }
            }
        }
        else
        {
            if(up_or_down)
            {
                if(point - q < 0)
                {
                    point = q - point;
                    up_or_down = 0;
                }
                else
                {
                    point -= q;
                }
            }
            else
            {
                if(point + q > p)
                {
                    point = 2 * p -  point - q;
                    up_or_down = 1;
                }
                else
                {
                    point += q;
                }
            }
        }
        
        if(point == p)
        {
            result = 0;
            break;
        }
        if(point == 0)
        {
            result = left_or_right ? 2 : 1;
            break;
        }
        
        left_or_right = !left_or_right;
    }
    
    return result;
}


// 法二 最小公倍数法
//int mirrorReflection(int p, int q){
//    if(!q)
//        return 0;
//
//    int k = p;
//    while(k % q)
//        k += p;
//
//    if(!(k / p % 2))
//        return 0;
//
//    return k / q % 2 ? 1 : 2 ;
//}



