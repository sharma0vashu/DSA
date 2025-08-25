class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        vector<int> ans;
        map<int, vector<int>> sumtoelements;
        for(int i=0;i<n;i++){
            for(int j=0; j<m;j++){
                sumtoelements[i+j].push_back(nums[i][j]);
            }
        }

         bool flip=true;

         for(auto &it: sumtoelements){
            if(flip){
                reverse(it.second.begin(),it.second.end());
            }
            for(int &num: it.second){
            ans.push_back(num);
         }
flip=!flip; 
         }
         


        return ans;
    }
};