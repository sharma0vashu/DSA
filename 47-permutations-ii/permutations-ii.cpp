class Solution {
public:
void prmu(vector<int> &nums, vector<vector<int>> &ans, int pos) {
        if (pos >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> m;
        for (int i = pos; i < nums.size(); i++) {
            if(m.find(nums[i])!=m.end()) continue;
             m.insert(nums[i]);
            swap(nums[i], nums[pos]);
            prmu(nums, ans, pos + 1);
            swap(nums[i], nums[pos]); 
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        prmu(nums, ans, 0);
        return ans;
    }
};