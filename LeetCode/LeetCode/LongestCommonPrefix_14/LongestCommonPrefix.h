//
//  LongestCommonPrefix.h
//  LeetCode
//
//  Created by 郝 源顺 on 2018/10/14.
//  Copyright © 2018年 desezed. All rights reserved.
//

#ifndef LongestCommonPrefix_h
#define LongestCommonPrefix_h

#include <stdio.h>

//14. 最长公共前缀

//编写一个函数来查找字符串数组中的最长公共前缀。
//
//如果不存在公共前缀，返回空字符串 ""。
//
//示例 1:
//
//输入: ["flower","flow","flight"]
//输出: "fl"
//示例 2:
//
//输入: ["dog","racecar","car"]
//输出: ""
//解释: 输入不存在公共前缀。
//说明:
//
//所有输入只包含小写字母 a-z 。

char* longestCommonPrefix(char** strs, int strsSize);



#endif /* LongestCommonPrefix_h */