class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();           // Number of rows
        int m = matrix[0].size();        // Number of columns
        
        // Create a new matrix to store the transposed result
        vector<vector<int>> result(m, vector<int>(n));
        
        // Fill the transposed matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                result[j][i] = matrix[i][j];  // Swap rows and columns
            }
        }
        
        return result;  // Return the transposed matrix
    }
};
