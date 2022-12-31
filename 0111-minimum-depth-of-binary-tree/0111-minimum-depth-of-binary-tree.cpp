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
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->right ==  NULL && root->left ==  NULL ) return 1;    
        int l =  minDepth(root->left);
        int r =  minDepth(root->right);
        if(root->left == NULL ||  root->right == NULL) return max(l,r)+1;
        return 1+min(l,r);
    }
};