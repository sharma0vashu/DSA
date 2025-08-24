class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int res = 0, x = 0, pos = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                x = pos + 1;
                pos = i;
            }
            res = max(res, i - x);
        }
        return res;
    }
};