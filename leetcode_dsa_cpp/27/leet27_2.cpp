class removeDuPliCaTe{
public:
    int removeDuplicate(vector<int> &nums , int val) { /* we use & ,
                                                        coz it says use my address ->
                                                        change the original don't need to copy*/

        for (int i = 0; i<nums.size() ; i++) {
            if (nums[i] == val) {
                nums.erase(nums.begin + i); /* here  + i , is used coz begin will only give 0
                                            , but we hv to remove that particular index were val is
                                            , so i used + i , eg;- val come at index 2 and  begin = 0 ,
                                            and i = 2 so final value = 2 */
                i--; // coz that value is removed from array ,so we used i-- , to start again from that position
            }
        }
        return nums.size(); //  total k pos that are not val in staring k = 0;
    }
};