class Solution {
public:
    void helper(vector<char> &s,int i,int j){
        if(i>j) return;
        swap(s[i],s[j]);
         helper(s,i+1,j-1);
    }
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        helper(s,i,j);
    
    }
};