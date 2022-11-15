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
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        vector<TreeNode*> res;
        res.push_back(root);
        int ans = 1;
        while(!res.empty()){
            TreeNode* node =  res.back();
            res.pop_back();
            if (node->left){
                res.push_back(node->left);
                ans +=1 ;
            }
            if (node->right){
                res.push_back(node->right);
                ans +=1 ;
            }
            
        }
        return ans;
    }
};