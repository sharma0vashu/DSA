class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int len = 1;
            int temp = nums[i];

            for (int j = i; j < nums.size() - 1; j++) {
                if ((temp & nums[j + 1]) == 0) { // Corrected XOR condition
                    temp += nums[j + 1];
                    len++;
                } else {
                    break;
                }
            }
            
            count = max(len, count); // Moved outside the inner loop
        }
        
        return count;
    }
};
