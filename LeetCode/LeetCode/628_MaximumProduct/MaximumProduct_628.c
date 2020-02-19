//
//  MaximumProduct_628.c
//  LeetCode
//
//  Created by Shun on 2019/5/11.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "MaximumProduct_628.h"
#include <limits.h>
#include "Tools.h"


// int maximumProduct(int* nums, int numsSize){
//     if(numsSize == 3)
//         return nums[0] * nums[1] * nums[2];
//
//     int tmp[2001] = {0} , pCount = 0  , rCount = 0 , result = 1;
//
//     for(int i = 0 ; i < numsSize ; ++i)
//     {
//         nums[i] >= 0 ? pCount++: rCount++;
//         tmp[nums[i] + 1000]++;
//     }
//
//     if(rCount <= 1 || !pCount)
//     {
//         for(int i = 2000 , count = 0; i >= 0 && count < 3; --i)
//         {
//             while(tmp[i] && count < 3)
//             {
//                 result *= i-1000;
//                 tmp[i]--;
//                 count++;
//             }
//         }
//         return result;
//     }
//
//     int result1 = 1 , result2 = 1;
//
//     for(int i = 2000 ; i >=1000 ; --i)
//     {
//         if(tmp[i])
//         {
//             result1 *= i - 1000;
//             break;
//         }
//     }
//
//     for(int i = 0 , count = 0 ; i < 1000 && count < 2 ; ++i)
//     {
//         while(tmp[i] && count < 2)
//         {
//             result1 *= i-1000;
//             tmp[i]--;
//             count++;
//         }
//     }
//
//     for(int i = 2000 , count = 0; i >= 0 && count < 3; --i)
//     {
//         while(tmp[i] && count < 3)
//         {
//             result2 *= i-1000;
//             tmp[i]--;
//             count++;
//         }
//     }
//
//     return result1 > result2 ? result1 : result2;
// }


 int maximumProduct(int* nums, int numsSize){
     int max1 = INT_MIN , max2 = INT_MIN , max3 = INT_MIN , min1 = INT_MAX , min2 = INT_MAX;
     
     for (int i = 0 ; i < numsSize ; ++i) {
         if(nums[i] > max1)
        {
            max3 = max2 ;
            max2 = max1;
            max1 = nums[i];
        }
         else if (nums[i] > max2)
         {
             max3 = max2;
             max2 = nums[i];
         }
         else if (nums[i] > max3)
             max3 = nums[i];

         if (nums[i] < min1) {
             min2 = min1;
             min1 = nums[i];
         }
         else if (nums[i] < min2)
             min2 = nums[i];
         
     }
     
     return max (max1 * max2 * max3 , max1 * min1 * min2);
 }

