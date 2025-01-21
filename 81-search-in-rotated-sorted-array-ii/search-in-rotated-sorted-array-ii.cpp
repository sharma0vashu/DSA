class Solution {
public:
    bool search(vector<int>& nums, int tar) {
        int n = nums.size();
        int beg = 0, end = n - 1;

        while (beg <= end) {
            int mid = beg + (end - beg) / 2;

            // Check if mid is the target
            if (nums[mid] == tar) {
                return true;
            }

            // Handle duplicates by skipping duplicates at the boundaries
            if (nums[beg] == nums[mid] && nums[mid] == nums[end]) {
                beg++;
                end--;
                continue;
            }

            // If the left half is sorted
            if (nums[beg] <= nums[mid]) {
                // Check if the target is in the left sorted half
                if (nums[beg] <= tar && tar < nums[mid]) {
                    end = mid - 1;
                } else {
                    beg = mid + 1;
                }
            } 
            // If the right half is sorted
            else {
                // Check if the target is in the right sorted half
                if (nums[mid] < tar && tar <= nums[end]) {
                    beg = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return false; // Target not found
    }
};
