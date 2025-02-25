class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int mod = 1e9 + 7;
        long long odd_count = 0, even_count = 1;  // even_count starts with 1 (empty prefix)
        long long prefix_sum = 0, result = 0;
        
        for (int num : arr) {
            prefix_sum += num;
            
            if (prefix_sum % 2 == 0) {  // Even prefix sum
                result = (result + odd_count) % mod;
                even_count++;
            } else {  // Odd prefix sum
                result = (result + even_count) % mod;
                odd_count++;
            }
        }
        return result;
    }
};
