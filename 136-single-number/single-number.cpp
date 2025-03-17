class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum=0;
        for(int val:nums){
            sum=val^sum;
        }
        return sum;
    }
};