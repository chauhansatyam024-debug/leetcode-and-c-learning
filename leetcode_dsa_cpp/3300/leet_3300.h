//
// Created by satyamchauhan on 09/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_3300_H
#define LEETCODE_DSA_CPP_LEET_3300_H


class Solution {
public:
    int minElement(vector<int>& nums) {
        vector <int> col{}; // collection , vector lib
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 9) {
                int num3 =0;
                string s = to_string(nums[i]); //string lib
                for (char x : s){
                    num3 = num3 + (x - '0');
                }
                col.push_back(num3);
            }
            else{
                col.push_back(nums[i]);
            }
        }
        sort(col.begin(),col.end()); // sort = algorithm lib
        return col[0];
    }
};


#endif //LEETCODE_DSA_CPP_LEET_3300_H
