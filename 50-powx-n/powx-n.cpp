class Solution {
public:
    double result(double x, long long n) { 
        double res = 1.0;
        while (n > 0) {
            if (n % 2 == 1) res *= x; // Multiply when n is odd
            x *= x; // Square x
            n /= 2; // Reduce exponent by half
        }
        return res;
    }

    double myPow(double x, long long n) {
        if (n == 0) return 1; 
        if (x == 1) return 1;
        if (x == -1) return (n % 2 == 0) ? 1 : -1; // Even power gives 1, odd gives -1

        if (n < 0) {
            return 1 / result(x, -n); // Handle negative exponent properly
        } else {
            return result(x, n);
        }
    }
};
