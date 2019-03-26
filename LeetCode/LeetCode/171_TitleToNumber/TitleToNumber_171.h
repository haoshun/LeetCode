//
//  TitleToNumber_171.h
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/25.
//  Copyright © 2019 desezed. All rights reserved.
//

#ifndef TitleToNumber_171_h
#define TitleToNumber_171_h

#include <stdio.h>

//171. Excel表列序号
//给定一个Excel表格中的列名称，返回其相应的列序号。
//
//例如，
//
//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28
//...
//示例 1:
//
//输入: "A"
//输出: 1
//示例 2:
//
//输入: "AB"
//输出: 28
//示例 3:
//
//输入: "ZY"
//输出: 701

int titleToNumber(char* s);

#endif /* TitleToNumber_171_h */
