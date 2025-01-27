class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.length();
        int m=part.length();
        while(n>0 && s.find(part)<n){
            int a=s.find(part);
            int b=a+m;
            s.erase(a,m);
        }  
        return s;
          }
};