//
// Created by satyamchauhan on 04/07/26.
//

#include<algorithm> // for sort

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int total = 0;
        sort(cost.begin(),cost.end(),greater<int>());
        for(int i = 0; i<cost.size(); i++){
            if((i+1) % 3 != 0){
                total+=cost[i];
            }

        }
        return total;
    }
};