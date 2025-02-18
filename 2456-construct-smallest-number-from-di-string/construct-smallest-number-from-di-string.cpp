class Solution {
public:
    string smallestNumber(string pattern) {
    string result = "";
    stack<int> stk;
    int num = 1; // Start from '1'

    for (char ch : pattern) {
        stk.push(num++); // Push current number

        if (ch == 'I') {
            // Pop all elements and add to result
            while (!stk.empty()) {
                result += to_string(stk.top());
                stk.pop();
            }
        }
    }

    // Push the last number
    stk.push(num++);
    while (!stk.empty()) {
        result += to_string(stk.top());
        stk.pop();
    }

    return result;
}
};