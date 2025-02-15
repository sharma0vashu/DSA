class Solution {
public:
    bool canPartition(string sq, int index, int target) {
        if (index == sq.length()) return target == 0; // Successful partition

        int sum = 0;
        for (int i = index; i < sq.length(); i++) {
            sum = sum * 10 + (sq[i] - '0'); // Form the number
            if (sum > target) break; // No need to continue if sum exceeds target
            if (canPartition(sq, i + 1, target - sum)) return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        int result = 0;
        for (int i = 1; i <= n; i++) {
            int square = i * i;
            string sqStr = to_string(square);
            if (canPartition(sqStr, 0, i)) {
                result += square;
            }
        }
        return result;
    }
};
