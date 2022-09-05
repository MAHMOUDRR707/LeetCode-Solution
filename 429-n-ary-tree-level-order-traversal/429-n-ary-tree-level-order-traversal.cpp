/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL) return {};
        
        vector<vector<int>> res; 
        helper(res,root,0);
        return res;
    }
    
    void helper(vector<vector<int>> &res , Node* root , int level){
        if(level ==  res.size()) {
            res.push_back({root->val});
        }
        else {
            res[level].push_back(root->val);
        }
        for(Node * i : root->children){
            helper(res,i,level+1);
        }
        
            
    }
};