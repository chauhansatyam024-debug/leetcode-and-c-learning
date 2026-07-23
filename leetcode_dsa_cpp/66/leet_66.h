//
// Created by satyamchauhan on 23/07/26.

// fragile code , like glass , will  break in INT_MAX

#ifndef LEETCODE_DSA_CPP_LEET_66_H
#define LEETCODE_DSA_CPP_LEET_66_H

#endif //LEETCODE_DSA_CPP_LEET_66_H
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int result = 0;
        for(int i : digits){
            result = result * 10 + (i) ;
        }
        result++;
        vector<int> res{};
        string s = to_string(result);
        for(char j : s){
            res.push_back(j - '0');
        }

        return res;
    }
};