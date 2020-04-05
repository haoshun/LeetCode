//
//  main.m
//  LeetCode_CPlusPlus
//
//  Created by 郝 源顺 on 2020/4/4.
//  Copyright © 2020 Shun. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:

    void eraseSubStr(string &str , int val)
    {
        string subStr ="->" + to_string(val);
        int pos = str.rfind(subStr);
        int n = subStr.size();
        str = str.erase(pos,n);
    }

    void preOrderTravel(TreeNode* root , vector<string> &returnVector , string & str)
    {
        str += (str.size() ?"->": "") + to_string(root -> val);
        if(!root -> left && !root -> right)
        {
            string newStr = str;
            returnVector.push_back(newStr);
            //eraseSubStr(str , root -> val);
        }
            
        if(root -> left)
        {
            preOrderTravel(root -> left , returnVector , str);
            eraseSubStr(str , root -> left -> val);
        }

        if(root -> right)
        {
            preOrderTravel(root -> right , returnVector , str);
            eraseSubStr(str , root -> right -> val);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> treePathsVector;
        string str;
        if(root != NULL){
            preOrderTravel(root , treePathsVector , str);
        }
        return treePathsVector;
    }
};

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        TreeNode t1(1) , t2(3),t3(3),t4(-5);
        t1.left = &t2;
        t1.right = &t3;
        t2.right = &t4;
        
        Solution solution;
        
        vector<string> pathVector =solution.binaryTreePaths(&t1);
        
        
        NSLog(@"Hello, World!");
    }
    return 0;
}
