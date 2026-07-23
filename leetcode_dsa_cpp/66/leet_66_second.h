//
// Created by satyamchauhan on 23/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_66_SECOND_H
#define LEETCODE_DSA_CPP_LEET_66_SECOND_H
// working code
#endif //LEETCODE_DSA_CPP_LEET_66_SECOND_H
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1 ; i>=0 ; i--){
            if(digits[i] < 9){ // will return digits after increment
                digits[i]++;
                return digits;
            }
            digits[i] = 0; // will put 9 = 0 in vector
        }
        digits.insert(digits.begin() , 1); // it will insert 1 in index[0] if all value is 9
        return digits;
    }
};