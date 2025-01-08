class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // Sort the array to group identical elements
        sort(arr.begin(), arr.end());

        vector<int> ans;
        int n = arr.size();
        int i = 0;

        while (i < n) {
            int count = 1;

            
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                } else {
                    break;
                }
            }

            ans.push_back(count);
            i += count;
        }

        
        sort(ans.begin(), ans.end());

        
        for (int k = 0; k < ans.size() - 1; k++) {
            if (ans[k] == ans[k + 1]) {
                return false;
            }
        }

        return true;
    }
};
