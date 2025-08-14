class Solution {
public:
    string largestGoodInteger(string num) {
        char maxDigit = '0' - 1; // smaller than '0'
        int n = num.size();

        for (int i = 0; i <= n - 3; i++) {
            if (num[i] == num[i+1] && num[i+1] == num[i+2]) {
                maxDigit = max(maxDigit, num[i]);
            }
        }

        if (maxDigit < '0') return ""; 

        return string(3, maxDigit);
    }
};
