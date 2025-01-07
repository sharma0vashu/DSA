class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0, end = arr.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] > arr[mid + 1]) {
               
                end = mid;
            } else {
                // Peak is on the right side
                st = mid + 1;
            }
        }

        // 'st' will point to the peak index
        return st;
    }
};
