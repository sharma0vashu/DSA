class Solution {
public:
 void solve(vector<int> output,int index,vector<vector<int>> &ans,vector<int> nums){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(output,index+1,ans,nums);
    //include
    int element=nums[index];
    output.push_back(element);
     solve(output,index+1,ans,nums);
 }
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>> ans;
     vector<int> output;
     int index=0;
     solve(output,0,ans,nums);

     return ans;
    }
};