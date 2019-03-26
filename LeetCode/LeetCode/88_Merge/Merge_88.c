//
//  Merge_88.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/3/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "Merge_88.h"

//法一
//void merge(int* nums1, int m, int* nums2, int n) {
//    if(!nums2 || n == 0)
//        return;
//    for(int i = m+n-1 ; i>=0 ; --i)
//    {
//        if(i>=n)
//        {
//            nums1[i] = nums1[i-n];
//        }
//        else
//        {
//            nums1[i] = 0;
//        }
//    }
//    for(int i = 0 , j = n ,k =0; i<m+n ; ++i)
//    {
//        if(j == m+n)
//        {
//            nums1[i] = nums2[k++];
//            continue;
//        }
//        if(k == n)
//        {
//            nums1[i] = nums1[j++];
//            continue;
//        }
//        if(nums1[j]>nums2[k])
//        {
//            nums1[i] = nums2[k++];
//        }
//        else
//        {
//            nums1[i] = nums1[j++];
//        }
//    }
//}


//法二
void merge(int* nums1, int m, int* nums2, int n) {
    if(!nums2 || n == 0)
        return;
    
    for(int i = m+n-1 , j = m-1 , k = n-1 ; i>=0 ; --i)
    {
        if(k == -1)
        {
            nums1[i] = nums1[j--];
            continue;
        }
        if(j == -1)
        {
            nums1[i] = nums2[k--];
            continue;
        }
        if(nums1[j] >nums2[k])
        {
            nums1[i] = nums1[j--];
        }
        else
        {
            nums1[i] = nums2[k--];
        }
    }
    
}


