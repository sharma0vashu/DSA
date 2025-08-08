class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cursum;
        int maxsum=INT_MIN;
        for(int i: nums){
            cursum+=i;
            maxsum=max(cursum,maxsum);
            if(cursum<0){
                cursum=0;
            }
        }
        return maxsum;
    }
};