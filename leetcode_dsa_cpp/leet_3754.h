//
// Created by satyamchauhan on 11/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3754_H
#define LEETCODE_DSA_CPP_LEET_3754_H

// it was quite easy
class Solution {
public:
    long long sumAndMultiply(int n) {
        long long onl = 0;
        long long sum = 0;
        string s = to_string(n); // so i can take whole value as a string and use for
        for (char y : s) {
            int temp = 0;
            if (y == '0') {
                continue;
            }
            else temp = y - '0'; onl = onl * 10 + (temp); sum = sum + (temp);
        }


        return onl * sum;
    }
};

#endif //LEETCODE_DSA_CPP_LEET_3754_H
