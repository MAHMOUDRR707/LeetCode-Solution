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
    int result = 0;
    int sumNumbers(TreeNode* root) {
        helper(root,0);
        return result ;
    }
    void helper(TreeNode* root,  int res){
        if (root == NULL) return ;
        res =  res*10 + root->val;
        
        if (root->left == NULL && root->right == NULL ) {
            result +=  res;
            return ;
        }
        
        helper(root->left,res);
        helper(root->right,res);
    }
};

