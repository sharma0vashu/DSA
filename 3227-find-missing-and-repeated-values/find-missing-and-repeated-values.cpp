class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int a, b;
        int actualsum = 0;
        int n = grid.size();
        
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                actualsum += grid[i][j];  // Add value to actual sum

                if (m[grid[i][j]] > 0) {  // Check if already seen
                    a = grid[i][j];  // Store duplicate value
                }
                m[grid[i][j]]++;
            }
        }

        int expectedsum = (n * n * (n * n + 1)) / 2;  // Correct formula
        b = expectedsum - (actualsum - a);  // Calculate missing number

        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
