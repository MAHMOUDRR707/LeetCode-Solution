/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        vector<int> res;
        ListNode *cur = head;
        int count  = 0 ;
        while(cur != NULL){
            res.push_back(cur->val);
            count ++;
            cur = cur->next;
        }
        for(int i = 0 ; i < count-1 ;i+=2){
            int x =  res[i] ;
            res[i] =   res[i+1];
            res[i+1] =  x;
        }
        ListNode *  y =  new ListNode();
        ListNode *  ans =  y;
        for(int i = 0 ; i < res.size() ;i++){
            y->next =  new ListNode(res[i]);
            y =  y->next;
        }
        return ans->next;
        
    }
};