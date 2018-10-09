//
//  ReverseStr.h
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/6.
//  Copyright © 2018年 desezed. All rights reserved.
//

#ifndef ReverseStr_h
#define ReverseStr_h

#include <stdio.h>

//344 反转字符串
//编写一个函数，其作用是将输入的字符串反转过来。
//示例 1:
//
//输入: "hello"
//输出: "olleh"
//示例 2:
//
//输入: "A man, a plan, a canal: Panama"
//输出: "amanaP :lanac a ,nalp a ,nam A"
char* reverseString(char* s) ;




//541 反转字符串II
//给定一个字符串和一个整数 k，你需要对从字符串开头算起的每个 2k 个字符的前k个字符进行反转。如果剩余少于 k 个字符，则将剩余的所有全部反转。如果有小于 2k 但大于或等于 k 个字符，则反转前 k 个字符，并将剩余的字符保持原样。
//
//示例:
//
//输入: s = "abcdefg", k = 2
//输出: "bacdfeg"
//要求:
//
//该字符串只包含小写的英文字母。
//给定字符串的长度和 k 在[1, 10000]范围内。
char* reverseStr(char* s, int k);





//345 反转字符串中的元音字母
//编写一个函数，以字符串作为输入，反转该字符串中的元音字母。
//
//示例 1:
//
//输入: "hello"
//输出: "holle"
//示例 2:
//
//输入: "leetcode"
//输出: "leotcede"
//说明:
//元音字母不包含字母"y"。
char* reverseVowels(char* s);

//557. 反转字符串中的单词 III
//给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
//
//示例 1:
//
//输入: "Let's take LeetCode contest"
//输出: "s'teL ekat edoCteeL tsetnoc"
//注意：在字符串中，每个单词由单个空格分隔，并且字符串中不会有任何额外的空格。
char* reverseWords(char* s) ;


//186. Reverse Words in a String 翻转字符串中的单词
//Given an input string, reverse the string word by word.
//
//For example,
//Given s = "the sky is blue",
//return "blue is sky the".
//
//Update (2015-02-12):
//For C programmers: Try to solve it in-place in O(1) space.
//
//click to show clarification.
//
//Clarification:
//
//What constitutes a word?
//A sequence of non-space characters constitutes a word.
//Could the input string contain leading or trailing spaces?
//Yes. However, your reversed string should not contain leading or trailing spaces.
//How about multiple spaces between two words?
//Reduce them to a single space in the reversed string.
char* reverseWordsAndReduceSpace(char* s) ;

#endif /* ReverseStr_h */
