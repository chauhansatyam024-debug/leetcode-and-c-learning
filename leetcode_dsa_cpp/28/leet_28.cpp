//
// Created by satyamchauhan on 03/07/26.
//
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.find(needle)  !=  string::npos){ /* here i hv done a simple if condition
                                                         in this condition we used find funtion
                                                         -> Find fun  find the position of substring in string and
                                                         return pos or index*/
            return haystack.find(needle);
        }

        return -1;
    }


};