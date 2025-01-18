class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxcount;
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            if(nums[i]!=1){
                
                count=0; 
            }
            else{
                count++;
                maxcount=max(maxcount,count);
            }
          
        }
       
        return maxcount;
    }
};