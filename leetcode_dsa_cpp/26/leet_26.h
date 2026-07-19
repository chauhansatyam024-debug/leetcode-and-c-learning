//
// Created by satyamchauhan on 19/07/26.
//

#ifndef LEETCODE_DSA_CPP_LEET_26_H
#define LEETCODE_DSA_CPP_LEET_26_H
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        for(int j = 1 ; j<nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};
#endif //LEETCODE_DSA_CPP_LEET_26_H
