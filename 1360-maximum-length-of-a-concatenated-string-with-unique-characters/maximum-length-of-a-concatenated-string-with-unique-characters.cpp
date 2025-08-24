class Solution {
public:
    bool compare(vector<int> &selected, string &curr) {
        vector<int> self(26, 0);
        for (char ch : curr) {
            if (self[ch - 'a'] == 1) return false; // duplicate within curr
            self[ch - 'a'] = 1;
        }
        for (char ch : curr) {
            if (selected[ch - 'a'] == 1) return false; // duplicate with already selected
        }
        return true;
    }

    int help(vector<string> &arr, int i, int len, vector<int> &selected) {
        if (i >= arr.size()) return len; // base case

        string curr = arr[i];
        int op1 = len; // exclude case

        if (compare(selected, curr)) {
            // include current string
            for (char ch : curr) selected[ch - 'a'] = 1;
            op1 = help(arr, i + 1, len + curr.size(), selected);
            // backtrack
            for (char ch : curr) selected[ch - 'a'] = 0;
        }

        // exclude current string
        int op2 = help(arr, i + 1, len, selected);

        return max(op1, op2);
    }

    int maxLength(vector<string>& arr) {
        vector<int> selected(26, 0);
        return help(arr, 0, 0, selected);
    }
};
