class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
          int n= nums.size();
        int beg=0;
        int end=n-1;
        vector<int> ans(2,-1);
        while(beg<=end){
            int mid=(beg+end)/2;
            if(nums[mid]==tar){
                ans[0]=mid;
                end=mid-1;
            }
            else if(nums[mid]>=tar){
               end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
         beg=0;
         end=n-1;
        
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(nums[mid]==tar){
                ans[1]=mid;
               beg=mid+1;
            }
            else if(nums[mid]>=tar){
               end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
            return ans;
    }
};