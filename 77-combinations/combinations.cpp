class Solution {
public:
void help(int pos,int k,int n, vector<vector<int>> &ans,vector<int> &subset){
   
    if(k==0){
            ans.push_back(subset);
            return;
        }
         if(pos>n){
          return;
    }
    subset.push_back(pos);
    help(pos+1,k-1,n,ans,subset);
    subset.pop_back();
    help(pos+1,k,n,ans,subset);
}
    vector<vector<int>> combine(int n, int k) {
        vector<int> subset;
        vector<vector<int>> ans;
        help(1,k,n,ans,subset);
        return ans;
    }
};