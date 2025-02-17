#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int backtrack(unordered_map<char, int>& freq) {
        int total = 0;
        for (auto& entry : freq) {
            if (entry.second > 0) {
                entry.second--;
                total += 1 + backtrack(freq);
                entry.second++;
            }
        }
        return total;
    }

    int numTilePossibilities(string tiles) {
        unordered_map<char, int> freq;
        for (char c : tiles) freq[c]++;  // Count frequency of letters
        return backtrack(freq);
    }
};

