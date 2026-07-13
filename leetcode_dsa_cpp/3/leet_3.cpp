//
// Created by satyamchauhan on 07/07/26.
//
#include<iostream>
#include<string>
#include<unordered_set>
//#include<algorithm>
#include<numeric>
class LongestSubString {
public:
    int lengt(std::string s) {
        std::unordered_set<char> seen{};
        int left = 0;
        int maxlen =0 ;
        for (int i = 0; i<s.size() ; i++) {
            while (seen.count(s[i])) { // check if char is already in seen
                seen.erase(s[left]); // if there remove it
                left++; // move forward , coz that element is already out of range
            }
            seen.insert(s[i]); // if element is unique
            maxlen = std::max(maxlen,i - left +1); // find maxlen everytime , a : old , b: new value
        }
        return maxlen;

    }
};
int main() {
    LongestSubString s1;
    std::cout<<s1.lengt("aabbbbasb");
    return 0;
}