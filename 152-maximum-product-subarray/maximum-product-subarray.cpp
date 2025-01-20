class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product;
        int maxp=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            product=1;
            for(int j=i;j<n;j++){
                product*=nums[j];
                
                 
                 maxp=max(maxp,product);
            }
           

        }
        return maxp;
    }
};