//
// Created by satyamchauhan on 05/07/26.
//
// everything is correct almost  , but at end -> int overflow problem
class Solution {
public:
    int myAtoi(string s) {
        int net = 0;
        int num = 0;
        erase(s , ' ');
        for(int i = 0; i<s.size() ; i++){
            string s2 =s;
            if( i == 0){
                if(s)
                    if(s[i] == '+'){
                        erase(s2 , '+');
                        num = stoi(s2);
                        return num;
                    }
                    else if ( s[i] == '-'){
                        erase(s2 ,'-');
                        int net = stoi(s2);
                        num = 0 - net;
                        return num;
                    }
                    else if(isdigit(unsigned(s[i]))){
                        num = stoi(s2);
                        return num;
                    }
                    else if (isalpha(s[i])){
                        return 0;
                    }
            }
        }
        return -1;
    }
};