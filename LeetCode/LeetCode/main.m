//
//  main.m
//  LeetCode
//
//  Created by Shun on 2018/5/4.
//  Copyright © 2018年 desezed. All rights reserved.
//

#import <Foundation/Foundation.h>





//#define TwoSum_1
//#define AddTwoNumbers_2

//#define Reverse_7

//#define IsPalindrome_9

//#define RomanToInt_13
//#define LongestCommonPrefix_14
//#define ThreeSum_15

//#define MergeTwoLists_21

//#define SwapPairs_24

#define RemoveDuplicates_26

//#define StrStr_28

//#define SearchInsert_35

//#define PlusOne_66

//#define ClimbStairs_70

//#define RemoveDuplicatesfromSortedArrayII_80

//#define IsPalindrome_125

//#define ReverseWordsAndReduceSpace_186

//#define IsHappy_202
//#define RemoveElements_203

//#define Isomorphic_205

//#define ReverseString_344
//#define ReverseVowels_345

//#define FirstUniqChar_387

//#define AddStrings_415

//#define CompressChars_443

//#define FindDisappearedNumbers_448

//#define LicenseKeyFormatting_482

//#define FindPairs_532

//#define ReverseStr_II_541

//#define ReverseWords_557

//#define NumJewelsInStones_771

//#define ShortestToChar_821

//#define IsLongPressedName_925

//#define AddToArrayForm_989





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



#pragma mark - 1_两数相加_TwoSum

#ifdef TwoSum_1
#import "TwoSum_1/TwoSum_1.h"

void TwoSum()
{
    //        int nums[8] ={2,7,11,15,20,21,22,24};
    //        int * result = twoSum(nums, 8, 37);
    //        int * result1 = twoSumHash(nums, 8, 37);
    //        int nums[4] ={2,7,11,15};
    
    int nums[4] ={0,3,4,0};
    int * result = twoSum(nums, 4, 0);
    int * result1 = twoSumHash(nums, 4, 0);
    printf("TwoSum result : %d , %d\n" , result[0] , result[1]);
    printf("TwoSumHash result1 :%d , %d\n" , result1[0] , result1[1]);
}
#endif

#pragma mark - 2_两数相加_AddTwoNumbers

#ifdef AddTwoNumbers_2
#import "AddTwoNumbers_2/AddTwoNumbers_2.h"

void AddTwoNumbers()
{
    struct ListNode n1 , n2 , n3 , n4 ,n5 , n6  , n7;
    struct ListNode * l1 = &n1 , *l2 = &n4 , *result;
    //        n1.val = 1;
    //        n1.next = &n2;
    //        n2.val = 9;
    //        n2.next = NULL;
    //
    //
    //        n3.val = 4;
    //        n3.next = &n4;
    //        n4.val = 9;
    //        n4.next = &n5;
    //        n5.val = 9;
    //        n5.next = &n6;
    //        n6.val = 9;
    //        n6.next = NULL;
    
    //        n1.val = 2;
    //        n1.next = &n2;
    //        n2.val = 4;
    //        n2.next = &n3;
    //
    //
    //        n3.val = 3;
    //        n3.next = NULL;
    //
    //        n4.val = 5;
    //        n4.next = &n5;
    //        n5.val = 6;
    //        n5.next = &n6;
    //        n6.val = 4;
    //        n6.next = NULL;
    
    n1.val = 1;
    n1.next = NULL;
    //        n2.val = 4;
    //        n2.next = &n3;
    
    
    //        n3.val = 3;
    //        n3.next = NULL;
    
    n4.val = 9;
    n4.next = &n5;
    n5.val = 9;
    n5.next = NULL;
    //        n6.val = 4;
    //        n6.next = NULL;
    
    result = addTwoNumbers(l1, l2);
}
#endif

#pragma mark - 7_整数反转_Reverse

#ifdef Reverse_7
#import "Reverse_7/Reverse_7.h"

void Reverse()
{
    printf("%d\n" , reverse(123));
}
#endif


#pragma mark - 9_回文数_IsPalindrome

#ifdef IsPalindrome_9
#import "IsPalindrome_9/IsPalindrome_9.h"

void IsPalindrome()
{
    printf("%d\n" , isPalindrome(20));
}
#endif


#pragma mark - 13_罗马数字转整数_RomanToInt

#ifdef RomanToInt_13
#import "RomanToInt_13/RomanToInt_13.h"

void RomanToInt()
{
    char u[100] = "MCMXCIV";
    printf("罗马数字转整数 : %d\n" , romanToInt(u));
}
#endif


#pragma mark - 14_最长公共前缀_LongestCommonPrefix

#ifdef LongestCommonPrefix_14
#import "LongestCommonPrefix_14/LongestCommonPrefix.h"

void LongestCommonPrefix()
{
    char *month[] = {"a","ac"};
    
    printf("%s" , longestCommonPrefix(month, 2));
}
#endif


#pragma mark - 15_三数之和_ThreeSum

#ifdef ThreeSum_15
#import "ThreeSum_15/ThreeSum_15.h"

void ThreeSum()
{
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
}
#endif


#pragma mark - 21_合并两个有序链表_MergeTwoLists

#ifdef MergeTwoLists_21
#import "MergeTwoLists_21/MergeTwoLists_21.h"

void MergeTwoLists()
{
    struct ListNode n1 , n2 , n3 , n4 ,n5 , n6;
    struct ListNode * l1 = &n1 , *l2 = &n4 , *result;
    n1.val = 1;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 4;
    n3.next = NULL;

    n4.val = 1;
    n4.next = &n5;
    n5.val = 3;
    n5.next = &n6;
    n6.val = 4;
    n6.next = NULL;

    result = mergeTwoLists(l1, l2);
}
#endif


#pragma mark - 24_两两交换链表中的节点_SwapPairs

#ifdef SwapPairs_24
#import "SwapPairs_24/SwapPairs_24.h"

void SwapPairs()
{
    struct ListNode n1 , n2 , n3 , n4;
    struct ListNode * l1 = &n1 ,  *result;
    
    n1.val = 1;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 3;
    n3.next = &n4;
    
    n4.val = 4;
    n4.next = NULL;
    
    result = swapPairs(l1);
    printf("两两交换链表中的节点 : ");
    while (result) {
        printf("%d " , result->val);
        result = result->next;
    }
    printf("\n");
}
#endif


#pragma mark - 26_删除排序数组中的重复项_RemoveDuplicates

#ifdef RemoveDuplicates_26
#import "RemoveDuplicates_26/RemoveDuplicates_26.h"

void RemoveDuplicates()
{
    int nums[10] ={0,0,1,1,1,2,2,3,3,4};
    
    int count = removeDuplicates_26(nums, 10);
    
    printf("删除排序数组中的重复项 : %d\n" , count);
    for (int i = 0 ; i < count; ++i) {
        printf("%d ," , nums[i]);
    }
    printf("\n");
}
#endif


#pragma mark - 28_实现strStr()_StrStr

#ifdef StrStr_28
#import "StrStr_28/StrStr_28.h"

void StrStr()
{
    char month[100] ="mississippi";
    char jj[50] = "issip";
    printf("-- %d --" , strStr(month, jj));
}
#endif


#pragma mark - 35_搜索插入位置_SearchInsert

#ifdef SearchInsert_35
#import "SearchInsert_35/SearchInsert_35.h"

void SearchInsert()
{
    
}
#endif


#pragma mark - 66_加一_PlusOne

#ifdef PlusOne_66
#import "PlusOne_66/PlusOne_66.h"

void PlusOne()
{
    
}
#endif


#pragma mark - 70_爬楼梯_ClimbStairs

#ifdef ClimbStairs_70
#import "ClimbStairs_70/ClimbStairs_70.h"

void ClimbStairs()
{
    int stairsCount = 25;
    printf("爬楼梯: %d\n" , climbStairs1(stairsCount));
    printf("爬楼梯: %d\n" , climbStairs2(stairsCount));
}
#endif


#pragma mark - 80_删除排序数组中的重复项_II_RemoveDuplicatesfromSortedArrayII

#ifdef RemoveDuplicatesfromSortedArrayII_80
#import "RemoveDuplicatesfromSortedArrayII_80/RemoveDuplicatesfromSortedArrayII_80.h"

void RemoveDuplicatesfromSortedArrayII()
{
    int nums[9] ={0,0,1,1,1,1,2,3,3};
    
    int count = removeDuplicates(nums, 9);
    
    printf("%d\n" , count);
}
#endif


#pragma mark - 125_验证回文串_IsPalindrome

#ifdef IsPalindrome_125
#import "IsPalindrome_125/IsPalindrome_125.h"

void IsPalindrome()
{
    char pmpm[100] ="A man, a plan, a canal: Panama";

    printf("验证回文串: %d , %s\n" , isPalindrome_125(pmpm) , pmpm);
}
#endif


#pragma mark - 186_翻转字符串中的单词_ReverseWordsAndReduceSpace

#ifdef ReverseWordsAndReduceSpace_186
#import "ReverseWordsAndReduceSpace_186/ReverseWordsAndReduceSpace_186.h"

void ReverseWordsAndReduceSpace()
{
    char w[300] = "lak.kb c!gfbb' cgyxxrph!ai paim,izbj.tnkugjx.f!uhs!xgv vsx.ncydmsgeaenstgthzd'fv qssjheigf!xca!d ,tsvj!yni'csdnphtt cej.ngxy egnh oaxzxugnehorkqkt,";
    ;
    printf("反转字符串中的单词 %s\n" , reverseWordsAndReduceSpace(w));
}
#endif


#pragma mark - 202_快乐数_IsHappy

#ifdef IsHappy_202
#import "IsHappy_202/IsHappy_202.h"

void IsHappy()
{
    int testNum = 25;
    printf("%d\n" , isHappy(testNum));
}
#endif


#pragma mark - 203_移除链表元素_RemoveElements

#ifdef RemoveElements_203
#import "RemoveElements_203/RemoveElements_203.h"

void RemoveElements()
{
    struct ListNode n1 , n2 , n3 , n4 ,n5 , n6  , n7;
    struct ListNode * l1 = &n1 , *l2 = &n4 , *result;
    
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
}
#endif


#pragma mark - 205_同构字符串_Isomorphic

#ifdef Isomorphic_205
#import "Isomorphic_205/Isomorphic_205.h"

void Isomorphic()
{
    
}
#endif


#pragma mark - 344_反转字符串_ReverseString

#ifdef ReverseString_344
#import "ReverseString_344/ReverseString_344.h"

void ReverseString()
{
    char  s[100] = "";
    printf("反转字符串%s\n" , reverseString(s));
}
#endif


#pragma mark - 345_反转字符串中的元音字母_ReverseVowels

#ifdef ReverseVowels_345
#import "ReverseVowels_345/ReverseVowels_345.h"

void ReverseVowels()
{
    char u[100] = "hello";
    printf("反转字符串中的元音字母 %s\n" , reverseVowels(u));
}
#endif


#pragma mark - 387_字符串中的第一个唯一字符_FirstUniqChar

#ifdef FirstUniqChar_387
#import "FirstUniqChar_387/FirstUniqChar_387.h"

void FirstUniqChar()
{
    char S[100000] = "tbxgqqacwoknthevmoinsvjrvqkfitllvafvswbxfoljeaveawrsdhglxhiubu";
    
    printf("%d\n",firstUniqChar(S));
}
#endif


#pragma mark - 415_字符串相加_AddStrings

#ifdef AddStrings_415
#import "AddStrings_415/AddStrings_415.h"

void AddStrings()
{
    char num1[50] = "1";
    char num2[50] = "1";
    printf("%s\n",addStrings(num1, num2));
}
#endif


#pragma mark - 443_字符串相加_AddStrings

#ifdef CompressChars_443
#import "CompressChars_443/CompressChars_443.h"

void CompressChars()
{
    //char s[50] = "aabbbbbcccccdddddeeef";
    char s[50] = "abc";
    //char s[50] = "abcdefggggggggggggabc";
    printf("%d\n" , compress(s, strlen(s)));
}
#endif


#pragma mark - 448_找到所有数组中消失的数字_FindDisappearedNumbers

#ifdef FindDisappearedNumbers_448
#import "FindDisappearedNumbers_448/FindDisappearedNumbers_448.h"

void FindDisappearedNumbers()
{
    int nums[8] ={4,3,2,7,8,2,3,1};
    int returnSize = 0;
    int * returnNums = findDisappearedNumbers(nums, 8, &returnSize);
    printf("找到所有数组中消失的数字 : \n");
    for (int i = 0; i < returnSize; ++i) {
        printf("%d ," , returnNums[i]);
    }
    printf("\n");
}
#endif

#pragma mark - 482_密钥格式化_LicenseKeyFormatting

#ifdef LicenseKeyFormatting_482
#import "LicenseKeyFormatting_482/LicenseKeyFormatting_482.h"

void LicenseKeyFormatting()
{
    //char s[50] = "aabbbbbcccccdddddeeef";
    char s[50] = "--a-a-a-a--";
    //char s[50] = "abcdefggggggggggggabc";
    printf("%s\n" , licenseKeyFormatting(s, 2));
}
#endif


#pragma mark - 532_数组中的K-diff数对_FindPairs

#ifdef FindPairs_532
#import "FindPairs_532/FindPairs_532.h"

void FindPairs()
{
    int nums[5] ={1,1,1,2,2};
    printf("%d\n" , findPairs(nums, 5, 1));
}
#endif


#pragma mark - 541_反转字符串II_ReverseStr

#ifdef ReverseStr_II_541
#import "ReverseStr_541/ReverseStr_541.h"

void ReverseStr()
{
    char  t[100] = "abcdefghijk";
    printf("反转字符串II %s\n" , reverseStr(t , 2));
}
#endif


#pragma mark - 557_反转字符串II_ReverseWords

#ifdef ReverseWords_557
#import "ReverseWords_557/ReverseWords_557.h"

void ReverseWords()
{
    char v[300] = "lak.kb c!gfbb' cgyxxrph!ai paim,izbj.tnkugjx.f!uhs!xgv vsx.ncydmsgeaenstgthzd'fv qssjheigf!xca!d ,tsvj!yni'csdnphtt cej.ngxy egnh oaxzxugnehorkqkt,";
    printf("反转字符串中的单词 %s\n" , reverseWords(v));
}
#endif


#pragma mark - 771_宝石与石头_NumJewelsInStones

#ifdef NumJewelsInStones_771
#import "NumJewelsInStones_771/NumJewelsInStones_771.h"

void NumJewelsInStones ()
{
    char S[50] = "beb";
    char J[10] = "dbca";
    printf("%d\n",numJewelsInStones(J, S));
}
#endif


#pragma mark - 821_字符的最短距离_ShortestToChar

#ifdef ShortestToChar_821
#import "ShortestToChar_821/ShortestToChar_821.h"

void ShortestToChar()
{
    char S[100] = "loveleetcode";
    char C = 'e';
    int length =strlen(S);
    int * num = shortestToChar(S, C, &length);
    
    for (int i = 0;i<length; ++i)
    {
        printf("%d," , num[i]);
    }
    printf("\n");
}
#endif


#pragma mark - 925_长按键入_IsLongPressedName

#ifdef IsLongPressedName_925
#import "IsLongPressedName_925/IsLongPressedName_925.h"

void IsLongPressedName()
{
    char * name = "vtkgn";
    char * typed = "vttkgnn";
    
    NSLog(@"%d" , isLongPressedName(name, typed)) ;
}
#endif


#pragma mark - 989_数组形式的整数加法_AddToArrayForm

#ifdef AddToArrayForm_989
#import "AddToArrayForm_989/AddToArrayForm_989.h"

void AddToArrayForm()
{
    int nums[4] ={1,2,0,0};
    int k = 23 , rSize = 0;
    int * r = addToArrayForm(nums, 4, k, &rSize);
    
    for (int i = 0; i< rSize; ++i) {
        printf("%d" , r[i]);
    }
    printf("\n");
}
#endif



#pragma mark -
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        CFAbsoluteTime start = CFAbsoluteTimeGetCurrent();
        

#ifdef TwoSum_1
        TwoSum();
#endif
        
        
#ifdef AddTwoNumbers_2
        AddTwoNumbers();
#endif
        
        
#ifdef Reverse_7
        Reverse();
#endif
        
        
#ifdef IsPalindrome_9
        IsPalindrome();
#endif
        
        
#ifdef RomanToInt_13
        RomanToInt();
#endif
        
        
#ifdef LongestCommonPrefix_14
        LongestCommonPrefix();
#endif
        
        
#ifdef ThreeSum_15
        ThreeSum();
#endif

        
#ifdef MergeTwoLists_21
        MergeTwoLists();
#endif
        
        
#ifdef SwapPairs_24
        SwapPairs();
#endif
        
        
#ifdef RemoveDuplicates_26
        RemoveDuplicates();
#endif
        
        
#ifdef StrStr_28
        StrStr();
#endif
        
        
#ifdef SearchInsert_35
        SearchInsert();
#endif
        
        
#ifdef PlusOne_66
        PlusOne();
#endif
        
        
#ifdef ClimbStairs_70
        ClimbStairs();
#endif
        
        
#ifdef RemoveDuplicatesfromSortedArrayII_80
        RemoveDuplicatesfromSortedArrayII();
#endif
        
        
#ifdef IsPalindrome_125
        IsPalindrome();
#endif
        
        
#ifdef ReverseWordsAndReduceSpace_186
        ReverseWordsAndReduceSpace();
#endif

        
#ifdef IsHappy_202
        IsHappy();
#endif
        
        
#ifdef RemoveElements_203
        RemoveElements();
#endif

        
#ifdef Isomorphic_205
        Isomorphic();
#endif
        
        
#ifdef ReverseString_344
        ReverseString();
#endif
        
        
#ifdef ReverseVowels_345
        ReverseVowels();
#endif
        
        
#ifdef FirstUniqChar_387
        FirstUniqChar();
#endif
        
        
#ifdef AddStrings_415
        AddStrings();
#endif
        
        
#ifdef CompressChars_443
        CompressChars();
#endif
        
        
#ifdef FindDisappearedNumbers_448
        FindDisappearedNumbers();
#endif
        
        
#ifdef LicenseKeyFormatting_482
        LicenseKeyFormatting();
#endif

        
#ifdef FindPairs_532
        FindPairs();
#endif
        
        
#ifdef ReverseStr_II_541
        ReverseStr();
#endif
        
        
#ifdef ReverseWords_557
        ReverseWords();
#endif
        
        
#ifdef NumJewelsInStones_771
        NumJewelsInStones();
#endif

        
#ifdef ShortestToChar_821
        ShortestToChar();
#endif
        
        
#ifdef AddToArrayForm_989
        AddToArrayForm();
#endif
        

        

        

        

    
        
        
        char w[300] = "Cv 79 agctu qh cig, vjg yknn tgkipu; cv 69, vjg ykv; cpf cv 59, vjg lwfiogpv.";
        printf("反转字符串%s\n" , decryptString(w));
        
        CFAbsoluteTime end = CFAbsoluteTimeGetCurrent();
        NSLog(@"time cost: %0.3f ms", (end - start)*1000);
    }
    return 0;
}
