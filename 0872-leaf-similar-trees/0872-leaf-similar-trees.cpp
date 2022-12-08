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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> res1;
        vector<int> res2;
        helper(res1,root1);
        helper(res2,root2);
        return res1 ==  res2;
        
    }
     void helper(vector<int> &res , TreeNode* root){
         if(root == NULL) return ;
         if(root->left ==  NULL && root->right ==  NULL) res.push_back(root->val);
         helper(res,root->left);
         helper(res,root->right);
     }
};