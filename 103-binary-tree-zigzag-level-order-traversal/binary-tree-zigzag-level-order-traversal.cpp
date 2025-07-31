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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //using 102 level order traversal
       vector<vector<int>> ans;
       bool is=true; //flag
        if(root==nullptr) return ans;
       queue<TreeNode*> q;
       q.push(root);
       while(!q.empty()){
        int s=q.size();
        vector<int> level;
        for(int i=0;i<s;i++){
            TreeNode* Node=q.front();
           if(Node->left!=NULL) q.push(Node->left);
           if(Node->right!=NULL) q.push(Node->right);
                q.pop();
                level.push_back(Node->val);
        } 
        if(is==false){
         reverse(level.begin(),level.end());
         
        }
        ans.push_back(level);
        is=!is; //only adding flag to it
        // if(is==true) is=false;
        // else{
        //     is=true;
        // }
       }
      
       return ans; 
    }
};