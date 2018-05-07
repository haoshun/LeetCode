//
//  ThreeSum.c
//  LeetCode
//
//  Created by Shun on 2018/5/6.
//  Copyright © 2018年 desezed. All rights reserved.
//

#include "ThreeSum.h"


//第一次 自己实现
//时间复杂度哦（n^3）
//超时
int** threeSum(int* nums, int numsSize, int* returnSize)
{
    int i =0,j=0,k=0,t =0;
    int *resultP;
    int ** resultPP , **resultPPWithoutDupllicate ;
    //resultP[1] = 0;
    resultPP = (int **) malloc(1*sizeof(int *));
    
    for(i=0;i<numsSize-2;++i)
    {
        for (j = i+1; j<numsSize-1; ++j)
        {
            for(k = j+1;k<numsSize;++k)
            {
                if((nums[i]+nums[j])==-nums[k])
                {
                    resultP = (int*)malloc(3*sizeof(int));

                    resultP[0] = nums[i];
                    resultP[1] = nums[j];
                    resultP[2] = nums[k];
                    
                    if(resultP[0]>resultP[1])
                    {
                        t=resultP[0];
                        resultP[0]=resultP[1];
                        resultP[1]=t;
                    }
                    
                    if(resultP[0]>resultP[2])
                    {
                        t=resultP[0];
                        resultP[0]=resultP[2];
                        resultP[2]=t;
                    }
                    if(resultP[1]>resultP[2])
                    {
                        t=resultP[1];
                        resultP[1]=resultP[2];
                        resultP[2]=t;
                    }
                    //printf("%d , %d , %d\n" , i ,j ,k );
                    if (*returnSize == 0)
                    {
                        //resultPP[] = resultP;
                    }
                    else
                    {
                        resultPP = (int **) realloc(resultPP, ((*returnSize+1)*sizeof(int *)));
                    }
                    resultPP[*returnSize] =resultP;
                    ++(*returnSize);
                }
            }
        }
    }
    resultP =(int*)malloc(*returnSize*sizeof(int));
    for (i = 0; i<*returnSize; ++i)
    {
        resultP[i] = -1;
    }
    
    for (i = 0 , k =0; i<*returnSize-1; ++i)
    {
        for (j = i+1;j< *returnSize; ++j)
        {
            if (resultPP[i][0] == resultPP[j][0] &&resultPP[i][1] == resultPP[j][1]&&resultPP[i][2] == resultPP[j][2])
            {
                if (resultP[j] == -1)
                {
                    resultP[j] = j;
                    k++;
                }
            }
        }
    }
    
    resultPPWithoutDupllicate =(int **) malloc((*returnSize - k)*sizeof(int *));
    for (i = 0 , k=0; i<*returnSize; ++i)
    {
        if (resultP[i] == -1)
        {
            resultPPWithoutDupllicate[k++] =resultPP[i];
        }
        else
        {
            free(resultPP[i]);
        }
    }
    
    *returnSize =k;
    
    
    return resultPPWithoutDupllicate;
}

void quickSort(int* nums,int first,int end)
{
    int temp,l,r;
    if(first>=end)return;
    temp=nums[first];
    l=first;r=end;
    while(l<r){
        while(l<r && nums[r]>=temp)r--;
        if(l<r)nums[l]=nums[r];
        while(l<r && nums[l]<=temp)l++;
        if(l<r)nums[r]=nums[l];
    }
    nums[l]=temp;
    quickSort(nums,first,l-1);
    quickSort(nums,l+1,end);
}

int** threeSumBySorted(int* nums, int numsSize, int* returnSize)
{
    int i,sum,top=-1,begin,end;
    int** res=(int**)malloc(sizeof(int*)*(numsSize*(numsSize-1)*(numsSize-2))/6);
    if(numsSize<3)
    {
        *returnSize=0;
        return res;
    }
    quickSort(nums,0,numsSize-1);
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>0)
        {
            break;
        }
        if(i>0 && nums[i]==nums[i-1])
        {
            continue;
        }
        begin=i+1;
        end=numsSize-1;
        while(begin<end)
        {
            sum=nums[i]+nums[begin]+nums[end];
            if(sum==0)
            {
                top++;
                res[top]=(int*)malloc(sizeof(int)*3);
                res[top][0]=nums[i];
                res[top][1]=nums[begin];
                res[top][2]=nums[end];
                begin++;end--;
                while(begin<end && nums[begin]==nums[begin-1])
                {
                    begin++;
                }
                while(begin<end && nums[end]==nums[end+1])
                {
                    end--;
                }
            }
            else if(sum>0)
            {
                end--;
            }
            else
            {
                begin++;
            }
        }
    }
    *returnSize=top+1;
    return res;
}
