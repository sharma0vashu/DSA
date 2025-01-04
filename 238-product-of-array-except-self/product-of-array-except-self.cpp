class Solution {
public:
   vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        
        int totalProduct = 1;  // Product of all non-zero elements
        int zeroCount = 0;     // Count of zeros in the array

        // Calculate total product and count zeros
        for (int val : nums) {
            if (val == 0) {
                zeroCount++;
            } else {
                totalProduct *= val;
            }
        }

        // Handle cases based on the number of zeros
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                // If the current number is zero and there's only one zero
                if (zeroCount == 1) {
                    ans[i] = totalProduct;
                }
                // If there are more than one zero, product is zero
            } else {
                // If no zeros in the array
                if (zeroCount == 0) {
                    ans[i] = totalProduct / nums[i];
                }
                // If there is one zero, product at non-zero indices is zero
            }
        }
        return ans;
    }
};