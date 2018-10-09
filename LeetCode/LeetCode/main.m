//
//  main.m
//  LeetCode
//
//  Created by Shun on 2018/5/4.
//  Copyright © 2018年 desezed. All rights reserved.
//

#import <Foundation/Foundation.h>

//#define TwoSum
//#define ThreeSum
//#define ReverseStr
//#define ShortestToChar
//#define FirstUniqChar
//#define NumJewelsInStones
//#define CompressChars
//#define LicenseKeyFormatting
//#define Reverse_7
#define IsPalindrome_9

#ifdef TwoSum
#import "TwoSum.h"
#endif

#ifdef ThreeSum
#import "ThreeSum.h"
#endif

#ifdef ReverseStr
#import "ReverseStr/ReverseStr.h"
#endif

#ifdef ShortestToChar
#import "ShortestToChar/ShortestToChar.h"
#endif

#ifdef FirstUniqChar
#import "FirstUniqChar/FirstUniqChar.h"
#endif

#ifdef NumJewelsInStones
#import "NumJewelsInStones/NumJewelsInStones.h"
#endif

#ifdef CompressChars
#import "CompressChars/CompressChars.h"
#endif

#ifdef LicenseKeyFormatting
#import "LicenseKeyFormatting_482/LicenseKeyFormatting.h"
#endif

#ifdef Reverse_7
#import "Reverse_7/Reverse_7.h"
#endif

#ifdef IsPalindrome_9
#import "IsPalindrome_9/IsPalindrome_9.h"
#endif

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        CFAbsoluteTime start = CFAbsoluteTimeGetCurrent();
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
        
#ifdef ThreeSum
        
        
        int nums[121] ={0,8,2,-9,-14,5,2,-5,-5,-9,
            -1,3,1,-8,0,-3,-12,2,11,9,
            13,-14,2,-15,4,10,9,7,14,-8,
            -2,-1,-15,-15,-2,8,-3,7,-12,8,
            6,2,-12,-8,1,-4,-3,5,13,-7,
            -1,11,-13,8,4,6,3,-2,-2,3,
            -2,3,9,-10,-4,-8,14,8,7,9,
            1,-2,-3,5,5,5,8,9,-5,6,
            -12,1,-5,12,-6,14,3,5,-11,8,
            -7,2,-12,9,8,-1,9,-1,-7,1,
            -7,1,14,-3,13,-4,-12,6,-9,-10,
            -10,-14,7,0,13,8,-9,1,-2,-5,
            -14};
        int  returnSize ;
        int i = 0;
        //int ** result =threeSum(nums, 121, &returnSize);
        int ** result =threeSumBySorted(nums, 121, &returnSize);
        //int * result1 = twoSumHash(nums, 4, 0);
        //printf("TwoSum result : %d , %d\n" , result[0] , result[1]);
        printf("returnsize : %d\n" , returnSize);
        for (i = 0; i<returnSize; ++i)
        {
            printf("ThreeSum result :%d , %d , %d\n" , result[i][0] , result[i][1] ,result[i][2] );
        }
        
        
#endif
        
#ifdef ReverseStr
        
        char  s[100] = "";
        printf("反转字符串%s\n" , reverseString(s));
        
        char  t[100] = "abcdefghijk";
        printf("反转字符串II %s\n" , reverseStr(t , 2));
        
        char u[100] = "hello";
        printf("反转字符串中的元音字母 %s\n" , reverseVowels(u));
        
        char v[300] = "lak.kb c!gfbb' cgyxxrph!ai paim,izbj.tnkugjx.f!uhs!xgv vsx.ncydmsgeaenstgthzd'fv qssjheigf!xca!d ,tsvj!yni'csdnphtt cej.ngxy egnh oaxzxugnehorkqkt,";
        printf("反转字符串中的单词 %s\n" , reverseWords(v));
        
        char w[300] = "lak.kb c!gfbb' cgyxxrph!ai paim,izbj.tnkugjx.f!uhs!xgv vsx.ncydmsgeaenstgthzd'fv qssjheigf!xca!d ,tsvj!yni'csdnphtt cej.ngxy egnh oaxzxugnehorkqkt,";
;
        printf("反转字符串中的单词 %s\n" , reverseWordsAndReduceSpace(w));
        
#endif
        
#ifdef ShortestToChar
        
        char S[100] = "loveleetcode";
        char C = 'e';
        int length =strlen(S);
        int * num = shortestToChar(S, C, &length);
        
        for (int i = 0;i<length; ++i)
        {
            printf("%d," , num[i]);
        }
        printf("\n");
        
        
#endif
        
#ifdef FirstUniqChar
        
        char S[100000] = "tbxgqqacwoknthevmoinsvjrvqkfitllvafvswbxfoljeaveawrsdhglxhiubu";
        
        printf("%d\n",firstUniqChar(S));
        
        
#endif
        
#ifdef NumJewelsInStones
        
        char S[50] = "beb";
        char J[10] = "dbca";
        printf("%d\n",numJewelsInStones(J, S));
        
        
#endif
        
#ifdef CompressChars
        
        //char s[50] = "aabbbbbcccccdddddeeef";
        char s[50] = "abc";
        //char s[50] = "abcdefggggggggggggabc";
        printf("%d\n" , compress(s, strlen(s)));
        
#endif
        
#ifdef LicenseKeyFormatting
        
        //char s[50] = "aabbbbbcccccdddddeeef";
        char s[50] = "--a-a-a-a--";
        //char s[50] = "abcdefggggggggggggabc";
        printf("%s\n" , licenseKeyFormatting(s, 2));
        
#endif
        
#ifdef Reverse_7

        printf("%d\n" , reverse(123));
        
#endif
        
#ifdef IsPalindrome_9
        
        printf("%d\n" , isPalindrome(20));
        
#endif
        
        CFAbsoluteTime end = CFAbsoluteTimeGetCurrent();
        NSLog(@"time cost: %0.3f ms", (end - start)*1000);
    }
    return 0;
}
