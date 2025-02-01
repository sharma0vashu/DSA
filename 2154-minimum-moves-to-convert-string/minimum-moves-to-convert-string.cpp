class Solution {
public:
    int minimumMoves(string s) {
        int count=0;
        int n=s.length();
    int i=0;
    while(i<n){
        if(s[i]=='X'){
            count++;
            i+=3;
        }
        else{
            i++;
        }
    }
    return count;
    }
};