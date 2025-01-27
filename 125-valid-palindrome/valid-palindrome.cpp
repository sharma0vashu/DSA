
class Solution {
public:
    bool isalpha(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return true;
        }
        return false;
    }
    
    bool isPalindrome(std::string s) {
        int n = s.length();
        int st = 0, end = n - 1;
        
        while (st < end) {
            // Convert to lowercase for case-insensitive comparison
            s[st] = tolower(s[st]);
            s[end] = tolower(s[end]);
            
            // Skip non-alphabetical characters
            if (!isalpha(s[st])) {
                st++;
                continue;
            }
            if (!isalpha(s[end])) {
                end--;
                continue;
            }
            
            // Check for palindrome (case-insensitive)
            if (s[st] != s[end]) {
                return false;
            }
            
            st++;
            end--;
        }
        
        return true;  // If loop completes, it's a palindrome
    }
};