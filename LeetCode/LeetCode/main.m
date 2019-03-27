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
//
//#define Reverse_7
//
//#define IsPalindrome_9
//
//#define RomanToInt_13
//#define LongestCommonPrefix_14
//#define ThreeSum_15
//
//#define MergeTwoLists_21
//
//#define SwapPairs_24
//
//#define RemoveDuplicates_26
//#define RemoveElement_27
//#define StrStr_28
//
//#define SearchInsert_35
//
//#define LengthOfLastWord_58
//
//#define PlusOne_66
//#define AddBinary_67
//
//#define MySqrt_69
//#define ClimbStairs_70
//
//#define RemoveDuplicatesfromSortedArrayII_80

//#define DeleteDuplicates_82
//#define DeleteDuplicates_83

//#define Merge_88

//#define IsPalindrome_125

//#define SingleNumber_136
//#define SingleNumber_137

//#define HasCycle_141
//#define DetectCycle_142

//#define InsertionSortList_147

//#define ConvertToTitle_168
//
//#define TitleToNumber_171
//#define TrailingZeroes_172

//#define ReverseWordsAndReduceSpace_186

//#define Rotate_189

//#define IsHappy_202
//#define RemoveElements_203

//#define Isomorphic_205

//#define ReverseList_206

//#define ContainsDuplicate_217

//#define ContainsNearbyDuplicate_219
#define ContainsNearbyAlmostDuplicate_220

//#define ComputeArea_223
//
//#define AddDigits_258
//
//#define ReverseString_344
//#define ReverseVowels_345
//
//#define FirstUniqChar_387
//
//#define AddStrings_415
//
//#define CompressChars_443
//
//#define FindDisappearedNumbers_448
//
//#define LicenseKeyFormatting_482
//
//#define FindPairs_532
//
//#define ReverseStr_II_541
//
//#define ReverseWords_557
//
//#define NumJewelsInStones_771
//
//#define ShortestToChar_821
//
//#define IsRectangleOverlap_836
//
//#define IsLongPressedName_925
//
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
#import "1_TwoSum/TwoSum_1.h"

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
#import "2_AddTwoNumbers/AddTwoNumbers_2.h"

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
#import "7_Reverse/Reverse_7.h"

void Reverse()
{
    printf("%d\n" , reverse(123));
}
#endif


#pragma mark - 9_回文数_IsPalindrome

#ifdef IsPalindrome_9
#import "9_IsPalindrome/IsPalindrome_9.h"

void IsPalindrome()
{
    printf("%d\n" , isPalindrome(20));
}
#endif


#pragma mark - 13_罗马数字转整数_RomanToInt

#ifdef RomanToInt_13
#import "13_RomanToInt/RomanToInt_13.h"

void RomanToInt()
{
    char u[100] = "MCMXCIV";
    printf("罗马数字转整数 : %d\n" , romanToInt(u));
}
#endif


#pragma mark - 14_最长公共前缀_LongestCommonPrefix

#ifdef LongestCommonPrefix_14
#import "14_LongestCommonPrefix/LongestCommonPrefix.h"

void LongestCommonPrefix()
{
    char *month[] = {"a","ac"};
    
    printf("%s" , longestCommonPrefix(month, 2));
}
#endif


#pragma mark - 15_三数之和_ThreeSum

#ifdef ThreeSum_15
#import "15_ThreeSum/ThreeSum_15.h"

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
#import "21_MergeTwoLists/MergeTwoLists_21.h"

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
#import "24_SwapPairs/SwapPairs_24.h"

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
#import "26_RemoveDuplicates/RemoveDuplicates_26.h"

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


#pragma mark - 27_移除元素_RemoveElement

#ifdef RemoveElement_27
#import "27_RemoveElement/RemoveElement_27.h"

void RemoveElement()
{
    int nums[4] ={3,2,2,3};
    
    int count = removeElement(nums, 4, 3);
    
    printf("移除元素 : %d\n" , count);
    for (int i = 0 ; i < count; ++i) {
        printf("%d ," , nums[i]);
    }
    printf("\n");
}
#endif


#pragma mark - 28_实现strStr()_StrStr

#ifdef StrStr_28
#import "28_StrStr/StrStr_28.h"

void StrStr()
{
    char month[100] ="mississippi";
    char jj[50] = "issip";
    printf("-- %d --" , strStr(month, jj));
}
#endif


#pragma mark - 35_搜索插入位置_SearchInsert

#ifdef SearchInsert_35
#import "35_SearchInsert/SearchInsert_35.h"

void SearchInsert()
{
    
}
#endif


#pragma mark - 58_最后一个单词的长度_LengthOfLastWord

#ifdef LengthOfLastWord_58
#import "58_LengthOfLastWord/LengthOfLastWord_58.h"

void LengthOfLastWord()
{
    char s[100] ="Hello World";
    printf("最后一个单词的长度: %d , %s\n" , lengthOfLastWord(s) , s);
}
#endif


#pragma mark - 66_加一_PlusOne

#ifdef PlusOne_66
#import "66_PlusOne/PlusOne_66.h"

void PlusOne()
{
    
}
#endif


#pragma mark - 67_二进制求和_AddBinary

#ifdef AddBinary_67
#import "67_AddBinary/AddBinary_67.h"

void AddBinary()
{
    char a[40] ="1010";
    char b[40] ="1011";
    printf("二进制求和: %s + %s = %s\n" , a , b , addBinary(a, b));
}
#endif


#pragma mark - 69_x 的平方根_MySqrt

#ifdef MySqrt_69
#import "69_MySqrt/MySqrt_69.h"

void MySqrt()
{
    int x = 8;
    printf("%d 的平方根: %d\n" , x , mySqrt(x));
}
#endif


#pragma mark - 70_爬楼梯_ClimbStairs

#ifdef ClimbStairs_70
#import "70_ClimbStairs/ClimbStairs_70.h"

void ClimbStairs()
{
    int stairsCount = 25;
    printf("爬楼梯: %d\n" , climbStairs1(stairsCount));
    printf("爬楼梯: %d\n" , climbStairs2(stairsCount));
}
#endif


#pragma mark - 80_删除排序数组中的重复项_II_RemoveDuplicatesfromSortedArrayII

#ifdef RemoveDuplicatesfromSortedArrayII_80
#import "80_RemoveDuplicatesfromSortedArrayII/RemoveDuplicatesfromSortedArrayII_80.h"

void RemoveDuplicatesfromSortedArrayII()
{
    int nums[9] ={0,0,1,1,1,1,2,3,3};
    
    int count = removeDuplicates(nums, 9);
    
    printf("%d\n" , count);
}
#endif


#pragma mark - 82_删除排序链表中的重复元素II_DeleteDuplicates

#ifdef DeleteDuplicates_82
#import "82_DeleteDuplicates/DeleteDuplicates_82.h"

void DeleteDuplicates()
{
    struct ListNode n1 , n2 , n3 , n4 ,n5 , n6  , n7;
    struct ListNode * result;
    
    n1.val = 1;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 3;
    n3.next = &n4;
    
    n4.val = 3;
    n4.next = &n5;
    n5.val = 4;
    n5.next = &n6;
    n6.val = 4;
    n6.next =&n7 ;
    
    n7.val = 5;
    n7.next = NULL;
    
    result = deleteDuplicates(&n1);
    while (result)
    {
        printf("%d ", result->val);
        result = result->next;
    }
    printf("\n");
}
#endif


#pragma mark - 83_删除排序链表中的重复元素_DeleteDuplicates

#ifdef DeleteDuplicates_83
#import "83_DeleteDuplicates/DeleteDuplicates_83.h"

void DeleteDuplicates()
{
    struct ListNode n1 , n2 , n3 , n4 ,n5 , n6  , n7;
    struct ListNode * result;
    
    n1.val = 1;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 3;
    n3.next = &n4;
    
    n4.val = 3;
    n4.next = &n5;
    n5.val = 4;
    n5.next = &n6;
    n6.val = 4;
    n6.next =&n7 ;
    
    n7.val = 5;
    n7.next = NULL;
    
    result = deleteDuplicates_83(&n1);
    while (result)
    {
        printf("%d ", result->val);
        result = result->next;
    }
    printf("\n");
}
#endif


#pragma mark - 88_合并两个有序数组_Merge

#ifdef Merge_88
#import "88_Merge/Merge_88.h"

void Merge()
{
    int num1[6] = {1,2,3,0,0,0};
    int num2[3] = {2,5,6};
    
    merge(num1, 3, num2, 3);
    
    for (int i = 0; i < 6; ++i) {
        printf("%d " , num1[i]);
    }
    printf("\n");
}
#endif


#pragma mark - 125_验证回文串_IsPalindrome

#ifdef IsPalindrome_125
#import "125_IsPalindrome/IsPalindrome_125.h"

void IsPalindrome()
{
    char pmpm[100] ="A man, a plan, a canal: Panama";

    printf("验证回文串: %d , %s\n" , isPalindrome_125(pmpm) , pmpm);
}
#endif


#pragma mark - 136_只出现一次的数字_SingleNumber

#ifdef SingleNumber_136
#import "136_SingleNumber/SingleNumber_136.h"

void SingleNumber()
{
    int num[5] = {4,1,2,1,2};
    
    printf("只出现一次的数字: %d \n" , singleNumber(num, 5));
}
#endif


#pragma mark - 137_只出现一次的数字_SingleNumberII

#ifdef SingleNumber_137
#import "137_SingleNumber/SingleNumber_137.h"

void SingleNumber()
{
    int num[7] = {0,1,0,1,0,1,99};
    
    printf("只出现一次的数字: %d \n" , singleNumberII(num, 7));
}
#endif


#pragma mark - 141_环形链表_HasCycle

#ifdef HasCycle_141
#import "141_HasCycle/HasCycle_141.h"

void HasCycle()
{
    struct ListNode n1 , n2 , n3 , n4;
    struct ListNode n5 , n6  , n7;
    struct ListNode * result;
    
    n1.val = 3;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 0;
    n3.next = &n4;
    
    n4.val = -4;
    n4.next = &n2;
//    n5.val = 4;
//    n5.next = &n6;
//    n6.val = 4;
//    n6.next =&n7 ;
//
//    n7.val = 5;
//    n7.next = NULL;
    
    printf("是否为环形链表: %d \n" , hasCycle(&n1));
}
#endif


#pragma mark - 142_环形链表II_DetectCycle

#ifdef DetectCycle_142
#import "142_DetectCycle/DetectCycle_142.h"

void DetectCycle()
{
    struct ListNode n1 , n2 , n3 , n4;
    //struct ListNode n5 , n6  , n7;
    struct ListNode * result;
    
    n1.val = 3;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 0;
    n3.next = &n4;
    
    n4.val = -4;
    n4.next = &n2;
    //    n5.val = 4;
    //    n5.next = &n6;
    //    n6.val = 4;
    //    n6.next =&n7 ;
    //
    //    n7.val = 5;
    //    n7.next = NULL;
    result = detectCycle(&n1);
    printf("链表开始入环的第一个节点: %d \n" , result ->val);
}
#endif


#pragma mark - 147_对链表进行插入排序_InsertionSortList

#ifdef InsertionSortList_147
#import "147_InsertionSortList/InsertionSortList_147.h"

void InsertionSortList()
{
    struct ListNode n1 , n2 , n3 , n4 , n5;
    //struct ListNode n5 , n6  , n7;
    struct ListNode * result;
    
    n1.val = -1;
    n1.next = &n2;
    n2.val = 5;
    n2.next = &n3;
    n3.val = 3;
    n3.next = &n4;
    
    n4.val = 4;
    n4.next = &n5;
    n5.val = 0;
    n5.next = NULL;
    //    n6.val = 4;
    //    n6.next =&n7 ;
    //
    //    n7.val = 5;
    //    n7.next = NULL;
    result = insertionSortList(&n1);
    printf("对链表进行插入排序:  \n");
    while (result)
    {
        printf("%d ", result->val);
        result = result->next;
    }
    printf("\n");
}
#endif


#pragma mark - 168_Excel表列名称_ConvertToTitle

#ifdef ConvertToTitle_168
#import "168_ConvertToTitle/ConvertToTitle_168.h"

void ConvertToTitle()
{
    char * result = convertToTitle(701);
    printf("Excel表列名称 %s\n" , result);
}
#endif


#pragma mark - 171_Excel表列序号_TitleToNumber

#ifdef TitleToNumber_171
#import "171_TitleToNumber/TitleToNumber_171.h"

void TitleToNumber()
{
    char w[10] = "A";
    printf("Excel表列序号 %d\n" , titleToNumber(w));
}
#endif


#pragma mark - 172_阶乘后的零_TrailingZeroes

#ifdef TrailingZeroes_172
#import "172_TrailingZeroes/TrailingZeroes_172.h"

void TrailingZeroes()
{
    int n = 45;
    printf("阶乘后的零 %d\n" , trailingZeroes(n));
}
#endif


#pragma mark - 186_翻转字符串中的单词_ReverseWordsAndReduceSpace

#ifdef ReverseWordsAndReduceSpace_186
#import "186_ReverseWordsAndReduceSpace/ReverseWordsAndReduceSpace_186.h"

void ReverseWordsAndReduceSpace()
{
    char w[300] = "lak.kb c!gfbb' cgyxxrph!ai paim,izbj.tnkugjx.f!uhs!xgv vsx.ncydmsgeaenstgthzd'fv qssjheigf!xca!d ,tsvj!yni'csdnphtt cej.ngxy egnh oaxzxugnehorkqkt,";
    ;
    printf("反转字符串中的单词 %s\n" , reverseWordsAndReduceSpace(w));
}
#endif


#pragma mark - 189_旋转数组_Rotate

#ifdef Rotate_189
#import "189_Rotate/Rotate_189.h"

void Rotate()
{
    int num[7] = {1,2,3,4,5,6,7};
    rotate(num, 7, 3);
    printf("旋转数组: \n");
    for (int i = 0; i < 7; ++i) {
        printf("%d ," , num[i]);
    }
    printf("\n");
}
#endif


#pragma mark - 202_快乐数_IsHappy

#ifdef IsHappy_202
#import "202_IsHappy/IsHappy_202.h"

void IsHappy()
{
    int testNum = 25;
    printf("%d\n" , isHappy(testNum));
}
#endif


#pragma mark - 203_移除链表元素_RemoveElements

#ifdef RemoveElements_203
#import "203_RemoveElements/RemoveElements_203.h"

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
#import "205_Isomorphic/Isomorphic_205.h"

void Isomorphic()
{
    
}
#endif


#pragma mark - 206_反转链表_ReverseList

#ifdef ReverseList_206
#import "206_ReverseList/ReverseList_206.h"

void ReverseList()
{
    struct ListNode n1 , n2 , n3 , n4 ,n5;
    struct ListNode *result;
    
    n1.val = 1;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 3;
    n3.next = &n4;
    
    n4.val = 4;
    n4.next = &n5;
    n5.val = 5;
    n5.next = NULL;
    
    result = reverseList(&n1);
    
    printf("反转链表:  \n");
    while (result)
    {
        printf("%d ", result->val);
        result = result->next;
    }
    printf("\n");
}
#endif


#pragma mark - 217_存在重复元素_ContainsDuplicate

#ifdef ContainsDuplicate_217
#import "217_ContainsDuplicate/ContainsDuplicate_217.h"

void ContainsDuplicate()
{
    int num[10] = {1,1,1,3,3,4,3,2,4,2};
    printf("存在重复元素: %d \n" , containsDuplicate(num, 10));
}
#endif


#pragma mark - 219_存在重复元素II_ContainsNearbyDuplicate

#ifdef ContainsNearbyDuplicate_219
#import "219_ContainsNearbyDuplicate/ContainsNearbyDuplicate_219.h"

void ContainsNearbyDuplicate()
{
    int num[6] = {1,2,3,1,2,3};
    printf("存在重复元素 II: %d \n" , containsNearbyDuplicate(num, 6, 2));
}
#endif


#pragma mark - 220_存在重复元素III_ContainsNearbyAlmostDuplicate

#ifdef ContainsNearbyAlmostDuplicate_220
#import "220_ContainsNearbyAlmostDuplicate/ContainsNearbyAlmostDuplicate_220.h"

void ContainsNearbyAlmostDuplicate()
{
    int num[6] = {1,5,9,1,5,9};
    printf("存在重复元素 III: %d \n" , containsNearbyAlmostDuplicate(num, 6, 2,3));
}
#endif


#pragma mark - 223_矩形面积_ComputeArea

#ifdef ComputeArea_223
#import "223_ComputeArea/ComputeArea_223.h"

void ComputeArea()
{
    printf("矩形面积 : %d \n" , computeArea(-3, 0, 3, 4, 0, -1, 9, 2));
}
#endif


#pragma mark - 258_各位相加_AddDigits

#ifdef AddDigits_258
#import "258_AddDigits/AddDigits_258.h"

void AddDigits()
{
    printf("各位相加 : %d \n" , addDigits(38));
}
#endif


#pragma mark - 344_反转字符串_ReverseString

#ifdef ReverseString_344
#import "344_ReverseString/ReverseString_344.h"

void ReverseString()
{
    char  s[100] = "";
    printf("反转字符串%s\n" , reverseString(s));
}
#endif


#pragma mark - 345_反转字符串中的元音字母_ReverseVowels

#ifdef ReverseVowels_345
#import "345_ReverseVowels/ReverseVowels_345.h"

void ReverseVowels()
{
    char u[100] = "hello";
    printf("反转字符串中的元音字母 %s\n" , reverseVowels(u));
}
#endif


#pragma mark - 387_字符串中的第一个唯一字符_FirstUniqChar

#ifdef FirstUniqChar_387
#import "387_FirstUniqChar/FirstUniqChar_387.h"

void FirstUniqChar()
{
    char S[100000] = "tbxgqqacwoknthevmoinsvjrvqkfitllvafvswbxfoljeaveawrsdhglxhiubu";
    
    printf("%d\n",firstUniqChar(S));
}
#endif


#pragma mark - 415_字符串相加_AddStrings

#ifdef AddStrings_415
#import "415_AddStrings/AddStrings_415.h"

void AddStrings()
{
    char num1[50] = "1";
    char num2[50] = "1";
    printf("%s\n",addStrings(num1, num2));
}
#endif


#pragma mark - 443_字符串相加_AddStrings

#ifdef CompressChars_443
#import "443_CompressChars/CompressChars_443.h"

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
#import "448_FindDisappearedNumbers/FindDisappearedNumbers_448.h"

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
#import "482_LicenseKeyFormatting/LicenseKeyFormatting_482.h"

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
#import "532_FindPairs/FindPairs_532.h"

void FindPairs()
{
    int nums[5] ={1,1,1,2,2};
    printf("%d\n" , findPairs(nums, 5, 1));
}
#endif


#pragma mark - 541_反转字符串II_ReverseStr

#ifdef ReverseStr_II_541
#import "541_ReverseStr/ReverseStr_541.h"

void ReverseStr()
{
    char  t[100] = "abcdefghijk";
    printf("反转字符串II %s\n" , reverseStr(t , 2));
}
#endif


#pragma mark - 557_反转字符串II_ReverseWords

#ifdef ReverseWords_557
#import "557_ReverseWords/ReverseWords_557.h"

void ReverseWords()
{
    char v[300] = "lak.kb c!gfbb' cgyxxrph!ai paim,izbj.tnkugjx.f!uhs!xgv vsx.ncydmsgeaenstgthzd'fv qssjheigf!xca!d ,tsvj!yni'csdnphtt cej.ngxy egnh oaxzxugnehorkqkt,";
    printf("反转字符串中的单词 %s\n" , reverseWords(v));
}
#endif


#pragma mark - 771_宝石与石头_NumJewelsInStones

#ifdef NumJewelsInStones_771
#import "771_NumJewelsInStones/NumJewelsInStones_771.h"

void NumJewelsInStones ()
{
    char S[50] = "beb";
    char J[10] = "dbca";
    printf("%d\n",numJewelsInStones(J, S));
}
#endif


#pragma mark - 821_字符的最短距离_ShortestToChar

#ifdef ShortestToChar_821
#import "821_ShortestToChar/ShortestToChar_821.h"

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


#pragma mark - 836_矩形重叠_IsRectangleOverlap

#ifdef IsRectangleOverlap_836
#import "836_IsRectangleOverlap/IsRectangleOverlap_836.h"

void IsRectangleOverlap()
{
    int rec1[4] ={0,0,2,2};
    int rec2[4] ={1,1,3,3};
    
    printf("矩形重叠: %d\n," , isRectangleOverlap(rec1, 4, rec2, 4));
}
#endif


#pragma mark - 925_长按键入_IsLongPressedName

#ifdef IsLongPressedName_925
#import "925_IsLongPressedName/IsLongPressedName_925.h"

void IsLongPressedName()
{
    char * name = "vtkgn";
    char * typed = "vttkgnn";
    
    NSLog(@"%d" , isLongPressedName(name, typed)) ;
}
#endif


#pragma mark - 989_数组形式的整数加法_AddToArrayForm

#ifdef AddToArrayForm_989
#import "989_AddToArrayForm/AddToArrayForm_989.h"

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
        
        
#ifdef RemoveElement_27
        RemoveElement();
#endif
        
        
#ifdef StrStr_28
        StrStr();
#endif
        
        
#ifdef SearchInsert_35
        SearchInsert();
#endif
        
        
#ifdef LengthOfLastWord_58
        LengthOfLastWord();
#endif
        
        
#ifdef PlusOne_66
        PlusOne();
#endif
        
        
#ifdef AddBinary_67
        AddBinary();
#endif
        
        
#ifdef MySqrt_69
        MySqrt();
#endif
        
        
#ifdef ClimbStairs_70
        ClimbStairs();
#endif
        
        
#ifdef RemoveDuplicatesfromSortedArrayII_80
        RemoveDuplicatesfromSortedArrayII();
#endif
        
        
#ifdef DeleteDuplicates_82
        DeleteDuplicates();
#endif

        
#ifdef DeleteDuplicates_83
        DeleteDuplicates();
#endif
        
        
#ifdef Merge_88
        Merge();
#endif
        
        
#ifdef IsPalindrome_125
        IsPalindrome();
#endif
        
        
#ifdef SingleNumber_136
        SingleNumber();
#endif
        
        
#ifdef SingleNumber_137
        SingleNumber();
#endif
        
        
#ifdef HasCycle_141
        HasCycle();
#endif
        
        
#ifdef DetectCycle_142
        DetectCycle();
#endif
      
        
#ifdef InsertionSortList_147
        InsertionSortList();
#endif
        
        
#ifdef ConvertToTitle_168
        ConvertToTitle();
#endif
        
        
#ifdef TitleToNumber_171
        TitleToNumber();
#endif
        
        
#ifdef TrailingZeroes_172
        TrailingZeroes();
#endif
        
        
#ifdef ReverseWordsAndReduceSpace_186
        ReverseWordsAndReduceSpace();
#endif
        
        
#ifdef Rotate_189
        Rotate();
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
        
        
#ifdef ReverseList_206
        ReverseList();
#endif
        
        
#ifdef ContainsDuplicate_217
        ContainsDuplicate();
#endif
        
        
#ifdef ContainsNearbyDuplicate_219
        ContainsNearbyDuplicate();
#endif
        
        
#ifdef ContainsNearbyAlmostDuplicate_220
        ContainsNearbyAlmostDuplicate();
#endif
        
        
#ifdef ComputeArea_223
        ComputeArea();
#endif
        
        
#ifdef AddDigits_258
        AddDigits();
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
        
        
#ifdef IsRectangleOverlap_836
        IsRectangleOverlap();
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
