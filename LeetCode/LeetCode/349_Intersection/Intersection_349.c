//
//  Intersection_349.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/28.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "Intersection_349.h"

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    if(!nums1 || !nums2 || nums1Size == 0 || nums2Size == 0)
        return NULL;
    int max = 0 ;
    for(int i = 0 ; i < nums1Size ; ++i)
        if(nums1[i] > max)
            max = nums1[i];
    for(int j = 0 ; j < nums2Size ; ++j)
        if(nums2[j] > max)
            max = nums2[j];
    max++;
    int * tmp = (int *)malloc(sizeof(int) * max);
    memset(tmp, 0, max*sizeof(int));
    for(int i = 0 ; i < nums1Size ; ++i)
        tmp[nums1[i] % max]--;
    int count = 0;
    for(int j = 0 , k = 0 ; j < nums2Size ; ++j)
    {
        k = nums2[j] % max;
        if(tmp[k] < 0)
        {
            tmp[k] = 1;
            count++;
        }
    }
    int * returnNums = (int *)malloc(sizeof(int) * count);
    for(int k = 0 , l = 0 ; k < max ; ++k)
        if(tmp[k] == 1)
            returnNums[l++] = k;
    free(tmp);
    *returnSize = count;
    return returnNums;
}

