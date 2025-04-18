class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                if (!st.empty()) {
                    if ((ch == '}' && st.top() == '{') ||
                        (ch == ']' && st.top() == '[') ||
                        (ch == ')' && st.top() == '(')) {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false; // Trying to close a bracket that was never opened
                }
            }
        }
        return st.empty(); // If stack is empty, all brackets matched
    }
};
