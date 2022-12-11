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
    int ans  = INT_MIN;
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }
    int helper(TreeNode* root){
        if(root ==  NULL) return 0;
        int gain_left = max(helper(root->left),0); 
        int gain_right = max(helper(root->right),0); 
        ans = max(ans, gain_left+gain_right+root->val);
        
        return max(gain_right+root->val , gain_left+root->val);
    }
};