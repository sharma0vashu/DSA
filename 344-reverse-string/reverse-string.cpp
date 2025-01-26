class Solution {
public:
    vector<char> reverseString(vector<char>& s) {
    int n=s.size();
    int st=0,end=n-1;
    while(st<=end){
        swap(s[st],s[end]);
        st++;
        end--;

    }
    return s;
    }
};