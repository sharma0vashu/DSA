class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;  
        int n = temperatures.size();
        vector<int> result(n, 0);  

        for (int i = 0; i < n; i++) {
          
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int idx = st.top();  
                st.pop();  
                result[idx] = i - idx;  
            }
            st.push(i);  
        }

        return result;  
    }
};
