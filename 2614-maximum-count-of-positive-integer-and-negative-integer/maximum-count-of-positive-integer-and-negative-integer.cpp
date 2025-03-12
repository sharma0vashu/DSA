class Solution {
public:
    int maximumCount(vector<int>& nums) {
      int maxpos=0;
      int maxneg=0;
      int maximum=INT_MIN;
      int n=nums.size();
      for(int i: nums){
        if(i>0) maxpos++;
        if(i<0) maxneg++;
      }
      maximum=max(maxpos,maxneg);
     return maximum;
    }
};