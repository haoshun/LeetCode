//
//  N-ary_Tree_Level_Order_Traversal.cpp
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/24.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "N-ary_Tree_Level_Order_Traversal.hpp"

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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> resultVector;
        if(root == NULL){
            return resultVector;
        }
        
        int queueLen = 0;
        Node * qNode = NULL;
        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            queueLen = q.size();
            vector<int> levelVector;
            
            for (int i = 0 ; i < queueLen ; ++i )
            {
                qNode = q.front();
                for (Node* child : qNode -> children)
                {
                    q.push(child);
                }
                levelVector.push_back(qNode -> val);
                q.pop();
            }
            resultVector.push_back(levelVector);
        }

        return resultVector;
    }
};


