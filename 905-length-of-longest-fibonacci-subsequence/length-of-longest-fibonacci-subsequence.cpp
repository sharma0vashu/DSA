#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> index;
        unordered_map<int, int> dp;
        int maxLen = 0;

        // Store indices of elements for quick lookup
        for (int i = 0; i < n; i++) {
            index[arr[i]] = i;
        }

        // Iterate through all pairs (i, j) to build the DP table
        for (int j = 1; j < n; j++) {
            for (int i = 0; i < j; i++) {
                int x = arr[j] - arr[i]; // Find previous element
                if (index.find(x) != index.end() && index[x] < i) {
                    int k = index[x];
                    dp[i * n + j] = dp[k * n + i] + 1;
                    maxLen = max(maxLen, dp[i * n + j]);
                } else {
                    dp[i * n + j] = 2; // Minimum length sequence
                }
            }
        }
        
        return maxLen >= 3 ? maxLen : 0; // Only valid if length >= 3
    }
};
