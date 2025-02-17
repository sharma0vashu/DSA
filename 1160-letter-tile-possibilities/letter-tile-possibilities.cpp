#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int backtrack(unordered_map<char, int>& freq) {
        int total = 0;
        for (auto& entry : freq) {
            if (entry.second > 0) {
                // Choose the letter
                entry.second--;

                // Count this sequence + recursively explore further
                total += 1 + backtrack(freq);

                // Backtrack: Restore letter count
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

