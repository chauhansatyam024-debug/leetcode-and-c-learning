//
// Created by satyamchauhan on 18/07/26.
//
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        for(int x : nums){
            if(x > max){
                max = x;
            }
            else if( x < min){
                min = x;
            }
        }
        int gcd = 1;
        for(int i = 1; i<=min ; i++){
            if(min % i == 0 && max % i == 0){
                if(i > gcd ){
                    gcd = i;
                }
            }
        }
        return gcd;

    }
};