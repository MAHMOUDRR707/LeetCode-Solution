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
    int ans ;
    int maxAncestorDiff(TreeNode* root) {
        if(root  == NULL) return 0;
        helper(root, root->val,root->val);
        return ans;
    }
    
    void helper(TreeNode* root , int max_value, int min_value){
        if (root ==  NULL) return  ;
        ans =  max(ans,max(abs(root->val - max_value ),abs(root->val - min_value )));
        max_value =  max(root->val , max_value);
        min_value =  min(root->val , min_value);
        helper(root->left ,max_value ,min_value);
        helper(root->right ,max_value ,min_value);
    }
};