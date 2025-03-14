class Solution {
public:
    string binary(int n) {
        string res = "";
        while (n > 0) {
            if (n % 2 == 1) res = '1' + res;  // Reverse order (MSB first)
            else res = '0' + res;
            n /= 2;
        }
        return res.empty() ? "0" : res;  // Handle case where n = 0
    }

    int minBitFlips(int start, int goal) {
        int minbit = 0;
        string start1 = binary(start);
        string goal11 = binary(goal);

        int a = start1.length();
        int b = goal11.length();

        // Pad the shorter string with leading zeros
        if (a > b) {
            goal11.insert(0, a - b, '0');  // Add leading zeros to goal11
        } else if (b > a) {
            start1.insert(0, b - a, '0');  // Add leading zeros to start1
        }

        // Compare bits and count flips
        for (int i = 0; i < start1.length(); i++) {
            if (start1[i] != goal11[i]) minbit++;
        }

        return minbit;
    }
};
