

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long result = 0;  
        
        // Ignore leading whitespaces
        while (i < s.size() && s[i] == ' ') i++;

        // Check for sign
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // Process digits
        while (i < s.size() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            // Handle overflow
            if (result > INT_MAX) 
                return (sign == 1) ? INT_MAX : INT_MIN;

            i++;
        }

        return sign * result;
    }
};
