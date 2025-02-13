#include <queue>
#include <vector>

class Solution {
public:
    int minOperations(std::vector<int>& nums, int k) {
        std::priority_queue<long long, std::vector<long long>, std::greater<long long>> minHeap(nums.begin(), nums.end());
        int operations = 0;

        while (minHeap.size() > 1 && minHeap.top() < k) {
            long long x = minHeap.top(); minHeap.pop();
            long long y = minHeap.top(); minHeap.pop();

            long long newValue = (2 * x) + y;  // Ensure calculations use long long
            minHeap.push(newValue);
            operations++;
        }

        return operations;
    }
};
