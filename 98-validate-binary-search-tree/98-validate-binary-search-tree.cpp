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
    bool isValidBST(TreeNode* root) {
        long min_x = -4294967296;
        long max_x =  2147483648;
        return helper(root,min_x,max_x);
    }
    
    bool helper(TreeNode* root , long min_x , long max_x){
        if (root ==NULL){
            return true;
        }
        if(root->val >= max_x || root->val <= min_x ){
            return false;
        }     
    return(helper(root->left,min_x , root->val) && helper(root->right, root->val, max_x));
    }
};