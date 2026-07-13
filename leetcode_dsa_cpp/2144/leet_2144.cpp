#include <vector>
#include <algorithm> // for sort
#include <iostream>

/*
 * this whole code is wrong but i like how big i hv written so i just pasted here
 */
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(),cost.end());
        vector <int> add4{};
        if ( cost.size() <=2){
            int add2 = 0;
            for(int &x : cost){
                add2+=x;

            }
            return add2;
        }
        while(true){
            auto x = cost.back();   // get last value
            cost.pop_back();        // then remove it

            auto y = cost.back();   // get new last value
            cost.pop_back();        // then remove it

            for(int i =n-3 ; i>=0; i--){
                if(cost[i] <= y){
                    add4.push_back(x);
                    add4.push_back(y);
                }
            }
            if(cost.empty()){break;}
        }
        int adf = 0;
        for(int i  = 0 ; i<add4.size() ; i++){

            adf+=add4[i];
        }
        return adf;
    }
};