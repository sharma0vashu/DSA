class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();
        
        if (n == 0) return 0; // If needle is empty, return 0
        
        for (int i = 0; i <= m - n; i++) { // Traverse haystack
            int j = 0;
            while (j < n && haystack[i + j] == needle[j]) {
                j++; // Check if needle matches
            }
            if (j == n) return i; // If full match found, return index
        }
        
        return -1; // If no match is found
    }
};
