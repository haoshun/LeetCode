//
//  NthUglyNumber_264.c
//  LeetCode
//
//  Created by Shun on 2019/5/5.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "NthUglyNumber_264.h"
#include <stdlib.h>

//int nthUglyNumber(int n){
//    if(n == 1)
//        return 1;
//    int l1 , l2 , l3 , result;
//    int * uglyArray = (int *)malloc(sizeof(int) * n);
//    uglyArray[0] = 1;
//    for(int index1 = 0 , index2 = 0 , index3 = 0 , i = 1; i < n ; ++i)
//    {
//        l1 = uglyArray[index1] * 2;
//        l2 = uglyArray[index2] * 3;
//        l3 = uglyArray[index3] * 5;
//        
//        if(l1 <= l2)
//        {
//            if(l1 <= l3)
//            {
//                uglyArray[i] = l1;
//                index1++;
//                if(l1 == l2)
//                    index2++;
//                if(l1 == l3)
//                    index3++;
//            }
//            else
//            {
//                uglyArray[i] = l3;
//                index3++;
//            }
//        }
//        else
//        {
//            if(l2 <= l3)
//            {
//                uglyArray[i] = l2;
//                index2++;
//                if(l2 == l3)
//                    index3++;
//            }
//            else
//            {
//                uglyArray[i] = l3;
//                index3++;
//            }
//        }
//    }
//    result = uglyArray[n-1];
//    free(uglyArray);
//    return result;
//}

int nthUglyNumber(int n){
    if(n > 6)
    {
        int * uglyNums = (int *) malloc(sizeof(int) * n);
        for(int i = 0 ; i < 6 ; ++i)
            uglyNums[i] = i + 1;
        int b_2_i = 3, b_3_i = 2, b_5_i = 1;
        int b_2 = 2 * uglyNums[b_2_i], b_3 = 3 * uglyNums[b_3_i] , b_5 = 5 * uglyNums[b_5_i];

        for(int i = 6, min = 0; i < n ; ++i)
        {
            min = b_2 <= b_3 ? (b_2 <= b_5 ? b_2 : b_5) : (b_3 <= b_5 ? b_3: b_5);
            uglyNums[i] = min;
            if(min == b_2)
                b_2 = 2 * uglyNums[++b_2_i];
            if(min == b_3)
                b_3 = 3 * uglyNums[++b_3_i];
            if(min == b_5)
                b_5 = 5 * uglyNums[++b_5_i];
        }
        n = uglyNums[n-1];
        free(uglyNums);
    }
    return n;
}


char firstUniqChar_offer(char* s){
    if(s)
    {
        int s_len = strlen(s);
        if(s_len == 1)
            return s[0];
        int * letters = (int*)malloc(26*sizeof(int));
        memset(letters,-1,26* sizeof(int));
        
//        for (int i = 0;  i < 26; ++i) {
//                   printf("%d \n" , letters[i]);
//               }
        
        for(int i = 0 , letter_index = 0 ; i < s_len ; ++i)
        {
            letter_index = s[i] - 'a';
            if(letters[letter_index] == -1)
                letters[letter_index] = i;
            else if(letters[letter_index] >= 0)
                letters[letter_index] = -2;
        }
        int min_index = s_len;
        
        for (int i = 0;  i < 26; ++i) {
            printf("%d \n" , letters[i]);
        }
        
        
        for(int i = 0 ; i < 26 ; ++i)
            if(letters[i] >=0 && letters[i] < min_index)
                min_index = letters[i];
        if(min_index < s_len)
            return s[min_index];
    }
    return ' ';
}


int listLength(struct ListNode *head)
{
    int len = 0;
    while(head)
    {
        len ++;
        head = head -> next;
    }
    return len;
}
struct ListNode * reverseList_160(struct ListNode *head)
{
    struct ListNode * pre = head , *current = head -> next , *temp;
    pre -> next = NULL;
    while(current)
    {
        temp = current -> next;
        current -> next = pre;
        pre = current;
        current = temp;
    }
    return pre;
}

struct ListNode * getListRear(struct ListNode *head)
{
    while(head -> next)
        head = head -> next;
    return head;
}

struct ListNode * getNodeByIndex(struct ListNode *head,int index)
{
    struct ListNode *node = head;
    for(int i = 0 ; node!=NULL && i < index ; ++i , node = node -> next);
    return node;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA && headB)
    {
        if(headA == headB)
            return headA;
        
        int len_A = listLength(headA) , len_B = listLength(headB);
        struct ListNode *rear = reverseList_160(headA);
        if(getListRear(headB) != headA)
            return NULL;

        int shareNodeCount = ((len_A + len_B - listLength(headB)) >> 1) + 1;
        reverseList_160(rear);
        return len_A - shareNodeCount > len_B - shareNodeCount? getNodeByIndex(headA ,len_A - shareNodeCount):getNodeByIndex(headB,len_B - shareNodeCount);
    }
    return NULL;
}



bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize){
    if(coordinatesSize > 2)
    {
        int tmp = coordinates[coordinatesSize -1][0] - coordinates[0][0];
        if(tmp)
        {
            double k = (coordinates[coordinatesSize - 1][1] - coordinates[0][1]) * 1.0 / tmp;
            int sTmp;
            for(int i = 1  ; i < coordinatesSize ; ++i)
            {
                sTmp = coordinates[i][0] - coordinates[0][0];
                if (sTmp)
                {
                    if (((coordinates[i][1] - coordinates[0][1]) * 1.0 / sTmp ) != k ) {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        else
        {
            for(int i = 0 ; i < coordinatesSize ; ++i)
                if(coordinates[i][0] != coordinates[0][0])
                    return false;
        }
    }
    return true;
}



