class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        int n=nums.size();
        int nsum=n*(n+1)/2;
        int sum=0;
        for( i=0;i<n;i++){
           sum= sum + nums[i];
            }

return nsum-sum;
       
    }
};