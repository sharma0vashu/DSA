class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> ans(2, -1);
        vector<int> primes;

        for (int i = left; i <= right; i++) {
            if (isPrime(i)) {
                primes.push_back(i);
            }
        }

        if (primes.size() < 2) return ans;

        int minDiff = INT_MAX;
        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                ans[0] = primes[i - 1];
                ans[1] = primes[i];
            }
        }

        return ans;
    }
};
