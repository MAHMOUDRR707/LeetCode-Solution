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
public :
    int ans = 0 ;
public:
    void helper(TreeNode* root, int max_x){
        if(root == NULL){
            return ;
        }
        if(root->val >= max_x){
            max_x = root->val;
            ans++;
        }
        helper(root->right,max_x);
        helper(root->left,max_x);
    }
    int goodNodes(TreeNode* root) {
        helper(root,root->val);
        return ans;
    }
};