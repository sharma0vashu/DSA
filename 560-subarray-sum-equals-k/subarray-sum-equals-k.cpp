
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSum;
        int sum = 0, count = 0;
        prefixSum[0] = 1; 
        
        for (int num : nums) {
            sum += num;
            if (prefixSum.find(sum - k) != prefixSum.end()) {
                count += prefixSum[sum - k];
            }
            prefixSum[sum]++;
        }
        
        return count;
    }
};
