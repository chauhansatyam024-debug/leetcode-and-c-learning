//
// Created by satyamchauhan on 10/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3120_SECOND_H
#define LEETCODE_DSA_CPP_LEET_3120_SECOND_H

// fast 0ms

int numberOfSpecialChars(string word) {
    unordered_set<char> lower, upper;

    for(auto x : word) {
        if(islower(x)) lower.insert(x);
        else upper.insert(x);
    }

    int count = 0;
    for(auto x : upper) {
        if(lower.count(tolower(x))) {
            count++;
        }
    }

    return count;
}


#endif //LEETCODE_DSA_CPP_LEET_3120_SECOND_H
