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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> res;
        vector<vector<int>>ans;
        helper(root,targetSum,res,ans);
        return ans;
        
    }
    
    void helper(TreeNode*  root , int target , vector<int> res , vector<vector<int>> &ans){
        if(root ==  NULL) return;
        res.push_back(root->val);
        target -= root->val;  
        if(target == 0 && root->right ==  NULL&&root->left == NULL){
            ans.push_back(res);
            return ;
        }
        
        helper(root->left,target,res,ans );
        helper(root->right,target,res,ans );
    }
};