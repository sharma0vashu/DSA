class Solution {
public:
    vector<int> sortColors(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
            }
        }
    }
    return nums;
    }
};