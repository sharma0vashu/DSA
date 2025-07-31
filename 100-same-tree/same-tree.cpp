/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr ) return true; //both are null
        if(p==nullptr || q==nullptr)  return false;// one is null
       
       if(p->val!=q->val) return false;// checking equal val
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right); // recursion
    }
};