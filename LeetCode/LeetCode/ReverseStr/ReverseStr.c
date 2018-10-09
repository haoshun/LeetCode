//
//  ReverseStr.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/6.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "ReverseStr.h"

//344 反转字符串
char* reverseString(char* s)
{
    long from = 0 , to = strlen(s)-1; //注意长度为0的字符串 不能用无符号整形
    while (from < to)
    {
        char temp = s[from];
        s[from++] = s[to];
        s[to--] =temp;
    }
    return s;
}



void RotateString (char * s , int from , int to)
{
    
    while (from < to)
    {
        char t = s[from];
        s[from ++] = s [to];
        s[to--] = t;
    }
}

//541 反转字符串II
char* reverseStr(char* s, int k)
{
    unsigned long strLength = strlen(s);
    int i = 0;
    do
    {
        if (i +k>strLength)
        {
            RotateString(s, i, strLength-1);
        }
//        else if (i+2*k>strLength)
//        {
//            RotateString(s, i, i+k-1);
//        }
        else
        {
            RotateString(s, i, i+k-1);
        }
        i += 2*k;
    } while (i<strLength);

    return s;
}

//345 反转字符串中的元音字母
int isVowel(char t)
{
    char vowel[10] = "aAeEiIoOuU";
    for (int i = 0; i<10; ++i)
    {
        if (vowel[i]==t)
        {
            return 1;
        }
    }
    return 0;
}

char* reverseVowels(char* s)
{
    long from = 0 , to = strlen(s)-1;
    while (from < to)
    {
        if (!isVowel(s[from]))
        {
            ++from;
            continue;
        }
        if (isVowel(s[to]))
        {
            char t = s[from];
            s[from ++] = s[to];
            s[to--] = t;
        }
        else
        {
            --to;
            continue;
        }
    }
    return s;
}


//557. 反转字符串中的单词 III

void removeRedundancySpace(char * s) //移除冗余的 空格
{
    long from = 0 ,index = 0 , length= strlen(s);
    int hasSpace = 0,hasFirstSpace = 0;
    for (; from<length; ++from)
    {
        if (s[from] == ' ')
        {
            if (from == 0)
            {
                hasFirstSpace =1;
            }
            if (!hasSpace)
            {
                hasSpace = 1;
            }
        }
        else
        {
            if (hasSpace)
            {
                if (!hasFirstSpace) {
                    s[index++] = ' ';
                }
            }
            s[index++] = s[from];
            hasSpace = 0;
            hasFirstSpace = 0;
        }
        if (from == length-1)
        {
            s[index] = '\0';
        }
    }
    
}

char* reverseWords(char* s)
{
//    long from = 0 , current = 0, length = strlen(s);
//    while (current<=length)
//    {
//        if (s[current] == ' ' || current ==length)
//        {
//            RotateString(s, from, current-1);
//            from = current+1;
//        }
//        current ++;
//    }
//    return s;
    long from = 0 , current = 0, length = strlen(s);
    while (current<length)
    {
        if (s[current] == ' ')
        {
            RotateString(s, from, current-1);
            from = current+1;
        }
        current ++;
        if (current == length-1)
        {
            RotateString(s, from, current);
        }
    }
    return s;
}


int hasSpace(char *s)
{
    for (int i = 0; i<strlen(s); ++i)
    {
        if (s[i] == ' ')
        {
            return 1;
        }
    }
    return 0;
}

//186. Reverse Words in a String 翻转字符串中的单词
char* reverseWordsAndReduceSpace(char* s)
{
    //removeRedundancySpace(s);
    printf("%lu\n" ,strlen(s));
    RotateString(s, 0, strlen(s)-1);
    if (hasSpace(s))
    {
        reverseWords(s);
    }
    return s;
}

