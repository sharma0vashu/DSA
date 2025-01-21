class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int n= nums.size();
        
        int beg=0;
        int end=n-1;
        
        while(beg<=end){
            int mid=(beg+end)/2;
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
        return -1;
    }
};