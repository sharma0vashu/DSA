#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int n = s.length();
        int i = 0;

        
        for (int j = 0; j <= n; ++j) {
            // When we encounter a space or the end of the string, we reverse the word
            if (j == n || s[j] == ' ') {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;  // Move start to the next word
            }
        }

        // Step 3: Remove extra spaces between words
        int  j = 0;
        i = 0;
        while (j < n) {
            if (s[j] != ' ' || (i > 0 && s[i - 1] != ' ')) {
                s[i++] = s[j];  // Copy non-space characters
            }
            j++;
        }

        // Step 4: Trim the trailing spaces
        if (i > 0 && s[i - 1] == ' ') {
            i--;  // Remove the last space
        }

        s.resize(i);  // Resize the string to remove extra spaces

        return s;
    }
};

