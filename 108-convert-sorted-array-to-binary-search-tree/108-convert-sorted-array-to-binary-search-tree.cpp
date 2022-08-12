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
#include <vector>

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n =  nums.size();
        if (n == 0 ){
            return 0 ;
        }
        TreeNode * binary    = Solver(nums,0,n-1);
        
        return binary;
    }
    
    TreeNode* Solver(vector<int>& nums,int l ,int r ){
        if (l>r){
            return nullptr;
        }
                
        int mid =  (l+r+1)/2;
        int middle = nums[mid];
        
        TreeNode * binary    = new TreeNode(middle);
        if(l ==  r){
            return binary;
        }
        binary->left =  Solver(nums,l,mid-1);
        binary->right =  Solver(nums,mid+1,r);
        return binary;
        
    }
    
};