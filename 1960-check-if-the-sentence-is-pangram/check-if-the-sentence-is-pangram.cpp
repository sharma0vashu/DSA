class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> ans(26,0);
        int n=sentence.length();
        for(int i=0;i<n;i++){
            int j=sentence[i]-'a';
            ans[j]=1;
        }
        for(int val : ans){
            if(val==0) return false;
        }
        return true;
    }
};