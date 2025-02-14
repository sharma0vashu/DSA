class Solution {
public:
    string makeGood(string s) {
        int n=s.length();
        string result = "";
         if(n==0 || n==1){
           return s; 
        }
        for (char &ch : s) {
            if (!result.empty() && (result.back() - 32 == ch || result.back() + 32 == ch)) {
                result.pop_back();
            } else {
                result.push_back(ch);
            }
        }
        return result;
    }
};
