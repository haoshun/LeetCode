//
//  CheckPerfectNumber_507.c
//  LeetCode
//
//  Created by 郝源顺 on 2019/4/26.
//  Copyright © 2019 desezed. All rights reserved.
//

#include "CheckPerfectNumber_507.h"


bool checkPerfectNumber(int num) {
    if (num <= 1)
        return false;
    
    int end = (int)sqrt(num);
    int sum = 1;
    for (int i = 2; i<= end; ++i) {
        if (!(num % i)) {
            sum += i;
            if (i != num /i) {
                sum += num / i;
            }
        }
        if (sum > num) {
            return false;
        }
    }
    if (sum == num)
        return true;
    return false;
}

