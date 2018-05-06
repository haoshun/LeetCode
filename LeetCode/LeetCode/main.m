//
//  main.m
//  LeetCode
//
//  Created by Shun on 2018/5/4.
//  Copyright © 2018年 desezed. All rights reserved.
//

#import <Foundation/Foundation.h>

int* twoSum(int* nums, int numsSize, int target) {
//    int *a = (int*)malloc(2*sizeof(int));
//    for(int i = 0;i<numsSize;i++)
//    {
//        for(int j = i+1;(j<numsSize && j != i);j++)
//        {
//            if(nums[i] + nums[j] == target)
//            {
//                a[0] = i;
//                a[1] = j;
//            }
//        }
//    }
//    return a;
    
    int i =0,j=numsSize ,k=0;
    int  * resultP = (int*)malloc(2*sizeof(int));
    resultP[0] = 0;
    resultP[1] = 0;

    for(i = 0;i<numsSize;i++)
    {
        if(nums[i]>target)
        {
            j = i;
            break;
        }
    }

    for(i=0;i<j;++i)
    {
        resultP[0] = i;
        for(k = i+1;k<j;++k)
        {
            if((nums[i]+nums[k])==target)
            {
                resultP[1] = k;
                break;
            }
        }
        if (resultP[1]>0)
        {
            break;
        }
    }

    return resultP;
    
}

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        
//        int nums[8] ={2,7,11,15,20,21,22,24};
//        int * result = twoSum(nums, 8, 37);
        int nums[4] ={2,7,11,15};
        int * result = twoSum(nums, 4, 9);
        printf("%d , %d" , result[0] , result[1]);
        
        
    }
    return 0;
}
