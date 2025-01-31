#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int maxArea(vector<int>& nums) {
        int left = 0;                    // Pointer at the beginning of the array
        int right = nums.size() - 1;      // Pointer at the end of the array
        int maxArea = 0;                  // Variable to store the maximum area
        
        // Use the two-pointer approach to calculate the area
        while (left < right) {
            // Calculate the current area
            int height = min(nums[left], nums[right]); // The height is the shorter of the two lines
            int width = right - left;                  // The width is the distance between the pointers
            int area = height * width;                 // Calculate the area

            // Update maxArea if we found a larger area
            maxArea = max(maxArea, area);

            // Move the pointer for the shorter line inward
            if (nums[left] < nums[right]) {
                left++;  // Move the left pointer to the right
            } else {
                right--; // Move the right pointer to the left
            }
        }

        return maxArea; // Return the maximum area found
    }
};
