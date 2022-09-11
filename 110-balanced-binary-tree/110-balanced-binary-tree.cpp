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
    bool ans = true;
    bool isBalanced(TreeNode* root) {
        check(root);
        return ans;
    }
    void check(TreeNode* root){
        if(root==NULL) return;
        if(abs(maxdepth(root->left)-maxdepth(root->right)) > 1){
            ans = false;
            return;
        }
        check(root->left);
        check(root->right);
    }
    int  maxdepth(TreeNode* root){
        if (root == NULL) return 0;
        return max ((maxdepth(root->left)+1),(maxdepth(root->right)+1));
    }
};