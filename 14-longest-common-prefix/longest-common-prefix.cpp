class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Edge case: If the input vector is empty, return an empty string
        if (strs.empty()) return "";

        int n = strs.size();
        int m = strs[0].size();
        string res = "";

        // Loop over each character index
        for (int j = 0; j < m; j++) {
            char currentChar = strs[0][j];  // Get the character from the first string
            // Compare the character with the same position in all other strings
            for (int i = 1; i < n; i++) {
                // If any string is shorter or the character doesn't match, return the result so far
                if (j >= strs[i].size() || strs[i][j] != currentChar) {
                    return res;
                }
            }
            // If the character matches in all strings, append it to the result
            res += currentChar;
        }

        return res;
    }
};
