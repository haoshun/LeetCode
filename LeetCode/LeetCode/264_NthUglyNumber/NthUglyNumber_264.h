//
//  NthUglyNumber_264.h
//  LeetCode
//
//  Created by Shun on 2019/5/5.
//  Copyright © 2019 Shun. All rights reserved.
//

#ifndef NthUglyNumber_264_h
#define NthUglyNumber_264_h

#include <stdio.h>
#include "Defines.h"

//264. 丑数 II
//
//编写一个程序，找出第 n 个丑数。
//
//丑数就是只包含质因数 2, 3, 5 的正整数。
//
//示例:
//
//输入: n = 10
//输出: 12
//解释: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 是前 10 个丑数。
//说明:
//
//1 是丑数。
//n 不超过1690。
//
//Hint:
//
//The naive approach is to call isUgly for every number until you reach the nth one. Most numbers are not ugly. Try to focus your effort on generating only the ugly ones.
//An ugly number must be multiplied by either 2, 3, or 5 from a smaller ugly number.
//The key is how to maintain the order of the ugly numbers. Try a similar approach of merging from three sorted lists: L1, L2, and L3.
//Assume you have Uk, the kth ugly number. Then Uk+1 must be Min(L1 * 2, L2 * 3, L3 * 5).

int nthUglyNumber(int n);

char firstUniqChar_offer(char* s);

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB);


bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize);

#endif /* NthUglyNumber_264_h */
