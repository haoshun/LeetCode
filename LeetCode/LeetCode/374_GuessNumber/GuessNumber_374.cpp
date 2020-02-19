//
//  GuessNumber_374.cpp
//  LeetCode
//
//  Created by Shun on 2019/3/28.
//  Copyright © 2019 Shun. All rights reserved.
//

#include "GuessNumber_374.hpp"

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        if(guess(1) == 0)
            return 1;
        if(guess(n) == 0)
            return n;
        int left =1 , right = n , mid = n/2;
        
        while(left < right)
        {
            int result = guess(mid);
            if(result == 0)
            {
                return mid;
            }
            else if(result ==1)
            {
                left = mid +1;
            }
            else
            {
                right = mid;
            }
            
            mid = (left >>1 ) +(right >>1);
        }
        return mid;
    }
};
