

class Solution {
public:
    unordered_map<int, int> postIndexMap;  // Map to store postorder indices for quick lookup
    int preIndex = 0;

    TreeNode* construct(vector<int>& preorder, vector<int>& postorder, int left, int right) {
        if (preIndex >= preorder.size() || left > right) return nullptr;

        TreeNode* root = new TreeNode(preorder[preIndex++]);  // First element in preorder is root

        if (left == right) return root;  // If there's only one node, return it

        // Find the left subtree's root index in postorder
        int postLeftIndex = postIndexMap[preorder[preIndex]];

        // Recursively construct left and right subtrees
        root->left = construct(preorder, postorder, left, postLeftIndex);
        root->right = construct(preorder, postorder, postLeftIndex + 1, right - 1);

        return root;
    }

    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        // Store postorder indices for quick lookup
        for (int i = 0; i < postorder.size(); i++) {
            postIndexMap[postorder[i]] = i;
        }
        return construct(preorder, postorder, 0, postorder.size() - 1);
    }
};

// Helper function to print inorder traversal of the tree
void printInorder(TreeNode* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}


