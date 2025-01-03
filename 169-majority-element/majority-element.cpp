class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
   for (int val : nums) {
       int fre = 0;
       for (int ele : nums) {
           if (ele == val) { 
               fre++;
           }
       }
       if (fre > (n / 2)) {
           
           return val;
       }
   
   }
   return -1;
    }
};