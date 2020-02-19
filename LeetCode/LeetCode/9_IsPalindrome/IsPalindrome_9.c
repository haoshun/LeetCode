//
//  IsPalindrome_9.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/10/9.
//  Copyright © 2018年 Shun. All rights reserved.
//

#include "IsPalindrome_9.h"

//数字取位计算
//bool isPalindrome(int x)
//{
//    if (x ==0)
//    {
//        return true;
//    }
//    if (x>0)
//    {
//        int y = x, z = 0,result = 0;
//        while (y!=0)
//        {
//            z = y %10;
//            y /=10;
//            result = result*10+z;
//        }
//        if (result == x)
//        {
//            return true;
//        }
//    }
//    return false;
//}

//数字转换字符串
bool isPalindrome(int x)
{
    if (x ==0)
    {
        return true;
    }
    if (x>0)
    {
        char str[15] ;
        unsigned long len = 0;
        sprintf(str,"%d",x);
        len  =strlen(str);
        for (int i = 0,j=len-1; i<j; ++i , --j)
        {
            if (str[i] != str[j])
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

