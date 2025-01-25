class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;
        int i = 0, j = 0;
        
        // Case 1: Odd total length
        if (n % 2 == 1) {
            int medianIndex = n / 2;
            int current = 0;
            // Merge arrays until we reach the median index
            for (int count = 0; count <= medianIndex; ++count) {
                if (i < n1 && (j >= n2 || nums1[i] < nums2[j])) {
                    current = nums1[i++];
                } else {
                    current = nums2[j++];
                }
            }
            return current;
        }
        
        // Case 2: Even total length
        else {
            int medianIndex1 = n / 2 - 1;
            int medianIndex2 = n / 2;
            int current = 0, prev = 0;
            
            // Merge arrays until both median indices are reached
            for (int count = 0; count <= medianIndex2; ++count) {
                prev = current;
                if (i < n1 && (j >= n2 || nums1[i] < nums2[j])) {
                    current = nums1[i++];
                } else {
                    current = nums2[j++];
                }
            }
            return (prev + current) / 2.0;
        }
    }
};
