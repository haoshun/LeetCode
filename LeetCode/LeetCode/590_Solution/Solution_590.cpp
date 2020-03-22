//
//  Solution_590.cpp
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/22.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "Solution_590.hpp"
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> returnVector;
        realPostOrder(root,returnVector);
        return returnVector;
    }
    void realPostOrder(Node* root , vector<int> &returnVector)
    {
        if(!root)
            return;
        for (Node* child : root -> children) {
            realPostOrder(child,returnVector);
        }
        returnVector.push_back(root -> val);
    }
};


