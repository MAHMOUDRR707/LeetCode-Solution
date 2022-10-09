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
    map<int,int> res;
    bool findTarget(TreeNode* root, int k) {
        if(root == 0) return false;
        if(res.find(k-root->val) ==  res.end())res[root->val]++;
        else  return true;
        return findTarget(root->left,k)||findTarget(root->right, k);
        
    }
};