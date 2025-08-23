class Solution {
public:
    void help(int i, int sum, vector<vector<int>> &ans, vector<int> &subset, int target, vector<int>& candidates) {
        if (sum == target) {
            ans.push_back(subset);
            return;
        }
        if (i >= candidates.size() || sum > target) {
            return;
        }

        // Include current element (can be used again)
        subset.push_back(candidates[i]);
        help(i, sum + candidates[i], ans, subset, target, candidates);
        subset.pop_back();

        // Exclude current element and move to next
        help(i + 1, sum, ans, subset, target, candidates);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> subset;
        vector<vector<int>> ans;
        help(0, 0, ans, subset, target, candidates); // ✅ start from index 0
        return ans;
    }
};
