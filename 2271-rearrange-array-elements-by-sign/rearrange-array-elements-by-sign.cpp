class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans,neg,pos;
        for(int val: nums){
          if(val>=0){
            pos.push_back(val);
          }
          else{
            neg.push_back(val);
          }
        }
        for (int i = 0; i < n / 2; ++i) {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};