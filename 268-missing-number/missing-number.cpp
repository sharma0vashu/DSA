class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        // Check if 0 is missing
        if (nums[0] != 0) {
            return 0;
        }

        // Traverse the sorted array to find the missing number
        for (int i = 0; i < n - 1; i++) { // Use `n-1` to avoid out-of-bounds
            if (nums[i + 1] - nums[i] != 1) {
                return nums[i] + 1;
            }
        }

        // If no missing number is found in the range, return n
        return n;
    }
};
