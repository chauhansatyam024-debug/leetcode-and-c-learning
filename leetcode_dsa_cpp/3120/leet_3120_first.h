//
// Created by satyamchauhan on 10/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3120_FIRST_H
#define LEETCODE_DSA_CPP_LEET_3120_FIRST_H

// slow as fk , but actually , i'm quiet fast at that
class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<char> u{}; // for upper char
        vector<char> l{}; // for lower char

        for (auto x : word) {
            if (isupper(x)) {
                if (find(u.begin(), u.end(), x) != u.end()) {
                    continue;
                } else {
                    u.push_back(x);
                }
            } else if (islower(x)) {
                if (find(l.begin(), l.end(), x) != l.end()) {
                    continue;
                } else {
                    l.push_back(x);
                }
            }
        }
        int count = 0;
        for (auto x : u) {
            if (find(l.begin(), l.end(), tolower(x)) != l.end()) {
                count++;
            }
        }
        return count;
    }
};
#endif //LEETCODE_DSA_CPP_LEET_3120_FIRST_H
