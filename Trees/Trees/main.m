//
//  main.m
//  Trees
//
//  Created by 郝源顺 on 2020/6/23.
//  Copyright © 2020 郝源顺. All rights reserved.
//

#import <Foundation/Foundation.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

 struct TreeNode* buildT(int* preorder, int p_head, int p_rear, int* inorder, int i_head, int i_rear)
 {
     struct TreeNode * root = (struct TreeNode *) malloc(sizeof(struct TreeNode));
     int rootVal = preorder[p_head];
     root -> val = preorder[p_head];
     //int leftRear = rightHead = 0;
     int leftChildCount = 0 , rightChildCount = 0;
     for(int i = i_head ; i <= i_rear ; ++i)
     {
         if(inorder[i] == rootVal)
        {
            // leftRear = i - 1；
            // rightHead = i + 1;
            leftChildCount = i - i_head;
            rightChildCount = i_rear - i;
        }
     }
     root -> left = leftChildCount ? buildT(preorder, p_head+1, p_head + leftChildCount, inorder, i_head, i_head + leftChildCount - 1) : NULL;
     root -> right = rightChildCount ? buildT(preorder, p_head+1+leftChildCount, p_head+leftChildCount+rightChildCount , inorder, i_head + 1 + leftChildCount, i_head+leftChildCount+rightChildCount) : NULL;
     return root;
 }


struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize){
    if(preorder && inorder)
    {
        return buildT(preorder,0,preorderSize-1,inorder,0,inorderSize-1);
    }
    return NULL;
}

int minInorder(int* nums, int numsSize)
{
    int index = numsSize - 1;
    int min = nums[index];
    for (int i = index -1;  i >=0 ; --i , --index) {
        if (nums[i] > min) {
            break;
        }
    }
    return index;
}

int binarySearch(int* nums, int head, int rear, int target)
{
    if(nums)
    {
        int mid = 0;
        while(head <= rear)
        {
            mid = (head + rear) / 2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] < target)
                head = mid + 1;
            else
                rear = mid - 1;
        }
    }
    return -1;
}

int findMin(int* nums, int numsSize){
    int head = 0 , rear = numsSize - 1 , mid = 0 , min = 0;
    while(head <= rear)
    {
        mid = (head + rear +1)/2;
        if(mid == rear)
        {
            min = nums[head] > nums[rear] ? rear : head;
            break;
        }
        if(nums[mid] >= nums[head])
        {
            if(nums[mid] == nums[rear] && nums[mid] == nums[head])
            {
                return minInorder(nums, numsSize);
                //head++;rear--;
            }
            else
            {
                if(nums[mid] > nums[rear])
                    head = mid + 1;
                else
                    rear = mid - 1;
            }
         }
        else
            rear = mid;
    }
    return min;
}

int search(int* nums, int numsSize, int target){
    if(nums && numsSize)
    {
        int min = findMin(nums,numsSize);
        if(target == nums[min])
            return min;
        if(target > nums[min])
        {
            int maxIndex = min == 0 ? numsSize - 1 : min - 1;
            if(nums[maxIndex] == target)
                return maxIndex;
            if(nums[maxIndex] > target)
            {
                if(nums[0] <= target)
                    return binarySearch(nums , 0 , maxIndex , target);
                else
                    return binarySearch(nums , min , numsSize - 1 , target);
            }
        }
    }
    return -1;
}


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
//        [4,5,6,7,0,1,2]
//        1
        int nums[5] = {1,1,1,3,1};
        int index =  search(nums, 5, 3);
        
    }
    return 0;
}
