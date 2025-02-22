class Solution {
public:
    TreeNode* recoverFromPreorder(string traversal) {
        stack<pair<TreeNode*, int>> st;  // (node, depth)
        int i = 0, n = traversal.size();
        
        while (i < n) {
            // गहराई (depth) की गणना करें
            int depth = 0;
            while (i < n && traversal[i] == '-') {
                depth++;
                i++;
            }

            // नोड का मान (value) निकालें
            int value = 0;
            while (i < n && isdigit(traversal[i])) {
                value = value * 10 + (traversal[i] - '0');
                i++;
            }

            TreeNode* node = new TreeNode(value);

            // उपयुक्त स्थान पर नोड को संलग्न करें
            while (!st.empty() && st.top().second >= depth) {
                st.pop();
            }

            if (!st.empty()) {
                if (!st.top().first->left) {
                    st.top().first->left = node;
                } else {
                    st.top().first->right = node;
                }
            }

            // स्टैक में नया नोड डालें
            st.push({node, depth});
        }

        // रूट नोड स्टैक के सबसे नीचे होगा
        while (st.size() > 1) {
            st.pop();
        }

        return st.top().first;
    }
};
