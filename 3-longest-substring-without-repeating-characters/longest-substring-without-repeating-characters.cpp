class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256,-1);
        int start=0;
        int maxcount=0;
        for(int i=0;i<s.size();i++){
        if(lastIndex[s[i]]>=start){
            start=lastIndex[s[i]]+1;
       }
       lastIndex[s[i]]=i;
       maxcount=max(maxcount,i-start+1);
       }
       return maxcount;
    }
};