class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum = 0, min_sum = 0, max_curr = 0, min_curr = 0;

        for (int num : nums) {
            max_curr = max(num, max_curr + num);
            min_curr = min(num, min_curr + num);

            max_sum = max(max_sum, max_curr);
            min_sum = min(min_sum, min_curr);
        }

        return max(abs(max_sum), abs(min_sum));
    }
};
