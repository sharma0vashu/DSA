class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=0;
         if (n == 0) return 0;
        for(int i=0;i<n;i++){
            if(i<n-1 && nums[i]==nums[i+1] ){
                continue;
            }
            else{
                nums[count]=nums[i];
                count++;
            }
        }
        
        return count;
    }
};