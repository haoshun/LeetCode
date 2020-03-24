//
//  Maximum_Depth_of_N-ary_Tree.cpp
//  LeetCode
//
//  Created by 郝源顺 on 2020/3/24.
//  Copyright © 2020 desezed. All rights reserved.
//

#include "Maximum_Depth_of_N-ary_Tree.hpp"

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
    int maxDepth(Node* root) {
        
        if(root == NULL){
            return 0;
        }
        int level = 0 , queueLen = 0;
        Node * qNode = NULL;
        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            ++level;
            queueLen = q.size();
            vector<int> levelVector;
            
            for (int i = 0 ; i < queueLen ; ++i )
            {
                qNode = q.front();
                for (Node* child : qNode -> children)
                {
                    q.push(child);
                }
                q.pop();
            }
        }
        return level;
    }
};
