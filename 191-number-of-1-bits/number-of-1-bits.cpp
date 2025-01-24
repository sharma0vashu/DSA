class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
while (n) {
        count += (n & 1); // Check if the last bit is 1
        n >>= 1;          // Right shift the number by 1
    }         
        return count;
    }
};