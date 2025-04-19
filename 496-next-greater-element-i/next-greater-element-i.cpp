class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i : nums1) {
            int val = i;
            for(int j = 0; j < nums2.size(); j++) {
                if(nums2[j] == val) {
                    bool found = false;
                    // Fix: avoid j+1 if it's out of bounds
                    for(int k = j + 1; k < nums2.size(); k++) {
                        if(nums2[k] > val) {
                            result.push_back(nums2[k]);
                            found = true;
                            break;
                        }
                    }
                    if(!found) {
                        result.push_back(-1);
                    }
                    break; // no need to continue searching
                }
            }
        }
        return result;
    }
};
