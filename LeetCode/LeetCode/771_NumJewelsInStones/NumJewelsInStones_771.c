//
//  NumJewelsInStones.c
//  LeetCode
//
//  Created by 郝 源顺 on 2018/9/26.
//  Copyright © 2018年 Shun. All rights reserved.
//

#include "NumJewelsInStones_771.h"

//时间复杂度 O(s * j) 空间复杂度 O(1)
//int numJewelsInStones(char* J, char* S)
//{
//    int count = 0 , s_len = strlen(S) , j_len = strlen(J);
//
//    for (int i = 0; i<s_len; ++i)
//    {
//        for (int j = 0; j<j_len; ++j)
//        {
//            if (S[i] == J[j])
//            {
//                count++;
//            }
//        }
//    }
//    return count;
//}

//时间复杂度 O(s + j) 空间复杂度 O(52)
//如果有字典结构 k空间复杂度 为O(j)
int numJewelsInStones(char* J, char* S)
{
    int count = 0 , s_len = strlen(S) , j_len = strlen(J) , letter;
    int nums[52] = {0};
    for (int i = 0; i<s_len; ++i)
    {
        letter =S[i]-'A';
        if (letter>25)
        {
            nums[letter-6] ++;
        }
        else
        {
            nums[letter] ++;
        }
    }
    for (int j = 0; j <j_len; ++j)
    {
        letter = J[j] - 'A';
        if (letter>25)
        {
            count += nums[letter-6];
        }
        else
        {
            count +=nums[letter];
        }
    }
    return count;
}

