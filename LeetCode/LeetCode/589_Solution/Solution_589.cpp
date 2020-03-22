//
//  Solution_589.cpp
//  LeetCode
//
//  Created by 郝 源顺 on 2020/3/22.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "Solution_589.hpp"

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
    vector<int> returnVector;
    vector<int> preorder(Node* root) {
        if(!root)
        {
            return this -> returnVector;
        }
        returnVector.push_back(root -> val);
        if((root -> children).size())
        {
            for(std::vector<Node*>::iterator it = root -> children.begin(); it != root -> children.end(); ++it)
            {
                this -> preorder(*it);
            }
        }

        return returnVector;
    }
};
