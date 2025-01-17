class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
    int n=nums.size();
    k=k%n;
    reverse(nums.begin(),nums.end()); //reverse the entire array

    reverse(nums.begin()+k,nums.end());

    reverse(nums.begin(),nums.begin()+k);

    
    return nums;
    }
};