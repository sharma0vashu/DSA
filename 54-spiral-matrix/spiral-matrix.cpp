class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        vector<int> ans;
        int l = 0;
        int r = m - 1;
        int t = 0;
        int b = n - 1;

        while (l <= r && t <= b) {
            // Traverse from left to right on the top row
            for (int i = l; i <= r; i++) {
                ans.push_back(nums[t][i]);
            }
            t++;

            // Traverse from top to bottom on the right column
            for (int i = t; i <= b; i++) {
                ans.push_back(nums[i][r]);
            }
            r--;

            if (t <= b) { // Check if there's still a bottom row
                // Traverse from right to left on the bottom row
                for (int i = r; i >= l; i--) {
                    ans.push_back(nums[b][i]);
                }
                b--;
            }

            if (l <= r) { // Check if there's still a left column
                // Traverse from bottom to top on the left column
                for (int i = b; i >= t; i--) {
                    ans.push_back(nums[i][l]);
                }
                l++;
            }
        }
        return ans;
    }
};
