/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr ||root==p|| root==q) return root;
        TreeNode* lef=lowestCommonAncestor( root->left, p, q);
        TreeNode* righ=lowestCommonAncestor(root->right,p,q);
        if(lef==nullptr) return righ;
        else if(righ==nullptr) return lef;
        else return root;
        
    }
};