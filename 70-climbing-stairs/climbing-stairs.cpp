class Solution {
public:
    int dpr(int n, vector<int> &dp) {
        if(n == 1) return 1;   
        if(n == 2) return 2;   
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = dpr(n-1, dp) + dpr(n-2, dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return dpr(n, dp);
    }
};
