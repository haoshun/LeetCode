//
//  RemoveDuplicatesfromSortedArrayII_80.c
//  LeetCode
//
//  Created by Shun on 2019/3/3.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "RemoveDuplicatesfromSortedArrayII_80.h"

int removeDuplicates(int* nums, int numsSize) {
    if(!nums || numsSize == 0)
        return 0;
    int count = 0;
    for(int fast = 0 , slow = 0 ; fast < numsSize ; ++fast)
    {
        if(nums[fast] != nums[slow])
        {
            if(fast -slow > 1)
                nums[count++]  = nums[slow];
            nums[count++] = nums[slow];
            slow = fast;
        }
        if(fast == numsSize - 1)
        {
            if(fast - slow > 0)
                nums[count++] = nums[slow];
            nums[count++] = nums[slow];
        }
    }
    return count;
}


void removeLetter(char* str , int len)
{
    if(!str || len == 0)
        return;
    for(int i = len - 1 , count  = 0 ; i >=0 ; --i)
    {
        if(str[i] == '#')
            count++;
        else
        {
            if(count > 0)
            {
                str[i] = '#';
                count--;
            }
        }
    }
}

bool backspaceCompare(char* S, char* T) {
    int s_len = strlen(S) , t_len = strlen(T);
    if(s_len == 0 && t_len == 0)
        return true;
    removeLetter(S,s_len);
    removeLetter(T,t_len);
    for(int i = 0 , j = 0 ; i < s_len && j < t_len ; ++i , ++j)
    {
        while(S[i] == '#' && i < s_len)
            ++i;
        while(T[j] == '#' && j < t_len)
            ++j;
        if(i == s_len && j == t_len)
            break;
        else
        {
            if(i == s_len || j == t_len)
                return false;
            if(S[i] != T[j])
                return false;
        }
    }
    return true;
}

