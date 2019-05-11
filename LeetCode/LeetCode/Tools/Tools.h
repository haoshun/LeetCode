//
//  Tools.h
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/21.
//  Copyright © 2019 desezed. All rights reserved.
//

#ifndef Tools_h
#define Tools_h

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

//翻转字符串
void RotateString (char * s , int from , int to);

//获取较大值
int max (int a , int b);

#endif /* Tools_h */
