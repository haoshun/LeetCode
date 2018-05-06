//
//  main.m
//  LeetCode
//
//  Created by Shun on 2018/5/4.
//  Copyright © 2018年 desezed. All rights reserved.
//

#import <Foundation/Foundation.h>

#define TwoSum



#ifdef TwoSum
#import "TwoSum.h"
#endif





int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        
#ifdef TwoSum
        
//        int nums[8] ={2,7,11,15,20,21,22,24};
//        int * result = twoSum(nums, 8, 37);
//        int * result1 = twoSumHash(nums, 8, 37);
        //        int nums[4] ={2,7,11,15};

        int nums[4] ={0,3,4,0};
        int * result = twoSum(nums, 4, 0);
        int * result1 = twoSumHash(nums, 4, 0);
        printf("TwoSum result : %d , %d\n" , result[0] , result[1]);
        printf("TwoSumHash result1 :%d , %d\n" , result1[0] , result1[1]);
        
#endif
        

        
    }
    return 0;
}
