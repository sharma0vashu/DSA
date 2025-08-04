class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root) return "#";

        queue<TreeNode*> q;
        q.push(root);
        string s;

        while (!q.empty()) {
            TreeNode* currNode = q.front();
            q.pop();
            if (currNode == nullptr) {
                s.append("#,");
            } else {
                s.append(to_string(currNode->val) + ",");
                q.push(currNode->left);
                q.push(currNode->right);
            }
        }

        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data == "#") return nullptr;

        stringstream ss(data);
        string val;
        getline(ss, val, ',');
        TreeNode* root = new TreeNode(stoi(val));

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();

            // Left child
            if (getline(ss, val, ',')) {
                if (val != "#") {
                    TreeNode* leftNode = new TreeNode(stoi(val));
                    curr->left = leftNode;
                    q.push(leftNode);
                }
            }

            // Right child
            if (getline(ss, val, ',')) {
                if (val != "#") {
                    TreeNode* rightNode = new TreeNode(stoi(val));
                    curr->right = rightNode;
                    q.push(rightNode);
                }
            }
        }

        return root;
    }
};
