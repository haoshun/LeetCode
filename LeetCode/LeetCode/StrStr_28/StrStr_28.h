//
//  StrStr_28.h
//  LeetCode
//
//  Created by 郝 源顺 on 2018/10/14.
//  Copyright © 2018年 desezed. All rights reserved.
//

#ifndef StrStr_28_h
#define StrStr_28_h

#include <stdio.h>

//28. 实现strStr()
//实现 strStr() 函数。
//
//给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。
//
//示例 1:
//
//输入: haystack = "hello", needle = "ll"
//输出: 2
//示例 2:
//
//输入: haystack = "aaaaa", needle = "bba"
//输出: -1
//说明:
//
//当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。
//
//对于本题而言，当 needle 是空字符串时我们应当返回 0 。这与C语言的 strstr() 以及 Java的 indexOf() 定义相符。

int strStr(char* haystack, char* needle) ;


struct ListNode {
         int val;
         struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);

struct ListNode* removeElements(struct ListNode* head, int val);

#endif /* StrStr_28_h */
