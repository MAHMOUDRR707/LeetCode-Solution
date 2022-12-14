/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> res;
        res.push(root);
        
        if(!root){
            return root;
        }
        
        while (!res.empty()){
            
            int size =  res.size();
            for(int i = 0 ;i<size;i++){
                Node*  node =  res.front();
                res.pop();
                if(i < size-1){
                    node->next =  res.front();
                }
                
                if(node->left){
                    res.push(node->left);
                }
                if(node->right){
                    res.push(node->right);
                }
            }
        }
        return root;
        
    }
};