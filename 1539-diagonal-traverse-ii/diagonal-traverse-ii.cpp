class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        int sum=0;
        unordered_map<int, vector<int>> sumtoelements;
        for(int i=nums.size()-1 ;i>=0;i--){
            for(int j=0; j<nums[i].size();j++){
                sum=max(sum,i+j);
                sumtoelements[i+j].push_back(nums[i][j]);
            }
        }
 for(int i=0;i<=sum;i++ ){
    for(auto el : sumtoelements[i])
 {
 ans.push_back(el);
 }
 }


        return ans;
    }
};