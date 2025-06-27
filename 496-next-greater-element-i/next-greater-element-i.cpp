class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int val: nums1){
            
            int i=0;
            while(i<nums2.size() && nums2[i]!=val){
                 i++;
            }
               
            
            int next=-1;
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > val) {
                    next = nums2[j];
                    break;
                }
            }
            res.push_back(next);
        }
        return res;
    }
};