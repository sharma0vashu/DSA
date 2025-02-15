class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        int count=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]==')') count--; //we are declaring this because for the first braket    count should be 0 if we will do count++ thn outer most para will not removed..
            if(count!=0) ans.push_back(s[i]);
            if(s[i]=='(') count++;
        }
        return ans;
    }
};