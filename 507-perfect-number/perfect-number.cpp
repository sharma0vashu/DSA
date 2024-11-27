#include <cmath>

class Solution {
public:
    bool checkPerfectNumber(int n) {
        if (n <= 1) return false; // Perfect numbers are greater than 1
        
        int sum = 1; // 1 is a proper divisor of any number greater than 1
        int sqrt_n = sqrt(n);
        
        for (int i = 2; i <= sqrt_n; ++i) {
            if (n % i == 0) {
                sum += i;
                if (i != n / i) { // Add the corresponding divisor only if it's distinct
                    sum += n / i;
                }
            }
        }
        
        return sum == n;
    }
};
