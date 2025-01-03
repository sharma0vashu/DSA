class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        int fre = 1;                   
        int ans = nums[0];              

        for (int i = 1; i < n; i++) {   
            if (nums[i] == nums[i - 1]) {
                fre++;                 
            } else {
                fre = 1;               
            }

            if (fre > (n / 2)) {        
                return nums[i];        
            }
        }

        return ans; 
    }
};
