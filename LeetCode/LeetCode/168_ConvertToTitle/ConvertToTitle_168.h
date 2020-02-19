//
//  ConvertToTitle_168.h
//  LeetCode
//
//  Created by Shun on 2019/3/25.
//  Copyright © 2019 Shun. All rights reserved.
//

#ifndef ConvertToTitle_168_h
#define ConvertToTitle_168_h

#include <stdio.h>
#include <stdlib.h>

//168. Excel表列名称
//给定一个正整数，返回它在 Excel 表中相对应的列名称。
//
//例如，
//
//1 -> A
//2 -> B
//3 -> C
//...
//26 -> Z
//27 -> AA
//28 -> AB
//...
//示例 1:
//
//输入: 1
//输出: "A"
//示例 2:
//
//输入: 28
//输出: "AB"
//示例 3:
//
//输入: 701
//输出: "ZY"
char* convertToTitle(int n);
#endif /* ConvertToTitle_168_h */
