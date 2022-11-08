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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return false;
        }
        return helper(root->right,root->left);
        
    }
    
    bool helper(TreeNode* r , TreeNode* l){
        if(r ==  NULL && l ==  NULL){
            return true;
        }
        
        if((r ==  NULL && l !=  NULL)||(r !=  NULL && l ==  NULL)){
            return false;
        }
        if(r->val != l->val){
            return false;
        }
        bool lflag = helper(r->right,l->left);
        bool rflag =  helper(r->left,l->right);
        return rflag&& lflag;
    }
};