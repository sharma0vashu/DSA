class Solution {
public:
    void prmu(vector<int> &nums, vector<vector<int>> &ans, int pos) {
        if (pos >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int i = pos; i < nums.size(); i++) {
            swap(nums[i], nums[pos]);
            prmu(nums, ans, pos + 1);
            swap(nums[i], nums[pos]); 
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        prmu(nums, ans, 0);
        return ans;
    }
};
