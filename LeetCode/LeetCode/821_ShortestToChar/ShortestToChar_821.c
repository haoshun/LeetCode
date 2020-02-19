//
//  ShortestToChar.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/23.
//  Copyright © 2018年 Shun. All rights reserved.
//

#include "ShortestToChar_821.h"

//821. 字符的最短距离
//给定一个字符串 S 和一个字符 C。返回一个代表字符串 S 中每个字符到字符串 S 中的字符 C 的最短距离的数组。
//
//示例 1:
//
//输入: S = "loveleetcode", C = 'e'
//输出: [3, 2, 1, 0, 1, 0, 0, 1, 2, 2, 1, 0]
//说明:
//
//字符串 S 的长度范围为 [1, 10000]。
//C 是一个单字符，且保证是字符串 S 里的字符。
//S 和 C 中的所有字母均为小写字母。
//
//本解法 只遍历一次字符串 设立一个last 记录上一个 字符C出现的位置 初始化为-1
//
//当遍历到目标字符时 根据last的位置 算出这两者中间的距离
//
//也可以先左往右遍历 算出各个位置距离最近的左侧的目标字符的距离
//再右往左遍历 算出各个位置距离最近的右侧目标字符的距离 与左侧的比较后取最小值保留
//
//
int* shortestToChar(char* S, char C, int* returnSize)
{
    if (!(S && C)) {
        return 0;
    }
    *returnSize = strlen(S);
    int * p =  (int*)malloc((*returnSize) *sizeof(int));
    
    for (int i = 0 , last = -1; i<*returnSize; ++i)
    {
        if (S[i] == C)
        {
            if (last == -1)
            {
                for (int j = 0; j<i; ++j)
                {
                    p[j] = i-j;
                }
            }
            else
            {
                for (int j = 0 , k = 1; j<(last+i)/2-last; ++j , ++k)
                {
                    p[last+1+j] = k;
                    p[i-j-1] = k;
                }
            }
            p[i] = 0;
            last = i;
            printf("last :%d\n" , last);
        }
        else
        {
            if (i == *returnSize-1)
            {
                for (int j = 0 , k=1  ; j<i-last; ++j ,++k)
                {
                    p[last+1+j] =k;
                }
            }
        }
    }
    return p;
}


