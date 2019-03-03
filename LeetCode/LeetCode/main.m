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
//#define IsPalindrome_9

//#define LongestCommonPrefix_14
//#define StrStr_28

#define RemoveDuplicatesfromSortedArrayII_80

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

#ifdef LongestCommonPrefix_14
#import "LongestCommonPrefix_14/LongestCommonPrefix.h"
#endif

#ifdef StrStr_28
#import "StrStr_28/StrStr_28.h"
#endif

#ifdef RemoveDuplicatesfromSortedArrayII_80
#import "RemoveDuplicatesfromSortedArrayII_80/RemoveDuplicatesfromSortedArrayII_80.h"
#endif

#import "FindDisappearedNumbers_448/FindDisappearedNumbers_448.h"

#import "FindPairs_532/FindPairs_532.h"

bool isHappy(int n) {
    int sum = 0 , num = n , tmp;
    while(num != 4)
    {
        do
        {
            tmp = num%10;
            sum += tmp*tmp;
            num /= 10;
            
        }
        while(num);
        
        if(sum == 1)
            return true;
        else
        {
            num = sum;
            sum = 0;
        }
        
    }
    return false;
}

 int climbStairs1(int n) {
     if(n ==1)
         return 1;
     if(n == 2)
         return 2;
     return climbStairs1(n-1) + climbStairs1(n-2);
 }

int climbStairs2(int n) {
    if(n ==1)
        return 1;
    if(n == 2)
        return 2;
    int stairsCount[2] ={1,2}  ;
    for (int index = 3 ; index <= n; ++index)
    {
        stairsCount[0] ^= stairsCount[1];
        stairsCount[1] ^= stairsCount[0];
        stairsCount[0] ^= stairsCount[1];
        stairsCount[1] += stairsCount[0];
    }
    return stairsCount[1];
}

char  * decryptString(char * s)
{
    long len = strlen(s);
    for(long i = 0 ; i < len ; ++i)
    {
        if((s[i] >= 'c' && s[i] <= 'z' ) || (s[i] >= 'C' && s[i] <= 'Z' ))
        {
            s[i] -= 2;
        }
        else if (s[i] == 'a' || s[i] == 'b' ||s[i] == 'A' || s[i] == 'B')
        {
            s[i] += 24;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            s[i] = '9' - s[i] + '0';
        }
    }
    return s;
}

void removeOtherChar(char * s)
{
    int len = strlen(s) , i = 0;
    for (int j = 0 ; j < len ; ++j)
    {
        if((s[j] >= 'A' && s[j] <='Z') ||(s[j] >= 'a' && s[j] <= 'z'))
        {
            s[i] = s[j];
            if(s[i] >= 'A' && s[i] <='Z')
            {
                s[i] += 32;
            }
            ++i;
        }
    }
    s[i] = '\0';
}

bool isPalindromes(char* s) {
    if(!s)
        return false;
    if(!strlen(s))
        return true;
    removeOtherChar(s);
    int len = strlen(s);
    for(int i = 0 ; i<len/2 ; ++i)
    {
        if(s[i] != s[len-i-1])
            return false;
    }
    return true;
}

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
        
        
#ifdef LongestCommonPrefix_14
        
        char *month[] = {"a","ac"};
        
        printf("%s" , longestCommonPrefix(month, 2));

        
#endif
        
#ifdef RemoveDuplicatesfromSortedArrayII_80
        
        int nums[9] ={0,0,1,1,1,1,2,3,3};
        
        int count = removeDuplicates(nums, 9);
        
        printf("%d\n" , count);
        
        
#endif
        
        
#ifdef StrStr_28
        
        char month[100] ="mississippi";
        char jj[50] = "issip";
        printf("-- %d --" , strStr(month, jj));
        
        
        struct ListNode n1 , n2 , n3 , n4 ,n5 , n6  , n7;
        struct ListNode * l1 = &n1 , *l2 = &n4 , *result;
//        n1.val = 1;
//        n1.next = &n2;
//        n2.val = 2;
//        n2.next = &n3;
//        n3.val = 4;
//        n3.next = NULL;
//
//        n4.val = 1;
//        n4.next = &n5;
//        n5.val = 3;
//        n5.next = &n6;
//        n6.val = 4;
//        n6.next = NULL;
//
//
//
//
//        result = mergeTwoLists(l1, l2);
        
        n1.val = 1;
        n1.next = &n2;
        n2.val = 2;
        n2.next = &n3;
        n3.val = 6;
        n3.next = &n4;

        n4.val = 3;
        n4.next = &n5;
        n5.val = 4;
        n5.next = &n6;
        n6.val = 5;
        n6.next =&n7 ;
    
        n7.val = 6;
        n7.next = NULL;
    

        result = removeElements(l1, 6);

        
        
        
#endif
        
//        char pmpm[100] ="A man, a plan, a canal: Panama";
//
//        printf("%d , %s\n" , isPalindromes(pmpm) , pmpm);
        
//        int nums[8] ={4,3,2,7,8,2,3,1};
//        int returnSize = 0;
//        int * returnNums = findDisappearedNumbers(nums, 8, &returnSize);
        
//        int nums[5] ={1,1,1,2,2};
//        
//        int count = findPairs(nums, 5, 1);
        
#define testNum 25
        
        //printf("%d\n" , climbStairs2(testNum));
        
        
        //printf("%d\n" , isHappy(testNum));
        char w[300] = "Cv 79 agctu qh cig, vjg yknn tgkipu; cv 69, vjg ykv; cpf cv 59, vjg lwfiogpv.";
        printf("反转字符串%s\n" , decryptString(w));
        
        CFAbsoluteTime end = CFAbsoluteTimeGetCurrent();
        NSLog(@"time cost: %0.3f ms", (end - start)*1000);
        
//        CFAbsoluteTime start1 = CFAbsoluteTimeGetCurrent();
//        printf("%d\n" , climbStairs1(testNum));
//        CFAbsoluteTime end1 = CFAbsoluteTimeGetCurrent();
//        NSLog(@"time cost: %0.3f ms", (end1 - start1)*1000);
    }
    return 0;
}
