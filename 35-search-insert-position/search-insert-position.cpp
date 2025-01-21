class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
        int n= nums.size();
        
        int beg=0;
        int end=n-1;
        int mid ; 
        while(beg<=end){
            mid= beg + (end - beg)/2; 
            
            if(nums[mid]==tar){
                return mid;
            }
            else if(nums[mid]>=tar){
               end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
       return beg ; 
       

    }
};