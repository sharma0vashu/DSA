class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2) return false;
        map<char,char> m1,m2;
        for(int i=0;i<n1;i++){
          if(m1.find(s[i])!=m1.end()){
             if(m1[s[i]]!=t[i]){
                return false;
             }         
              }
           if(m2.find(t[i])!=m2.end()){
             if(m2[t[i]]!=s[i]){
                return false;
             }  
          }
           else{
            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
           }
        }
        return true;
    }
};