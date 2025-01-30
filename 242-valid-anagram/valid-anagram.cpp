#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        unordered_map<char, int> charMap;
        if(n1!=n2) return false;

        for(int i=0;i<n1;i++){
          charMap[s[i]]++;
        }
        for (char c : t) {
       if(charMap.find(c)==charMap.end()|| charMap[c]==0) return false;
       charMap[c]--;
    }
    return true;
    }
};