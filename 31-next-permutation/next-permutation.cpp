class Solution {
public:
    vector<int> nextPermutation(vector<int>& A) {
        int n = A.size();
        int p = -1;

        // Step 1: Find the first decreasing element from the end
        for (int i = n - 2; i >= 0; i--) { // Changed i=n-1 to i=n-2
            if (A[i] < A[i + 1]) {
                p = i;
                break;
            }
        }

        // Step 2: If no such element is found, reverse the array
        if (p == -1) {
            reverse(A.begin(), A.end());
            return A;
        }

        // Step 3: Find the smallest element greater than A[p] to the right of p
        for (int i = n - 1; i > p; i--) {
            if (A[i] > A[p]) {
                swap(A[i], A[p]);
                break;
            }
        }

        // Step 4: Reverse the elements to the right of p
        reverse(A.begin() + p + 1, A.end());
        return A;
    }
};
