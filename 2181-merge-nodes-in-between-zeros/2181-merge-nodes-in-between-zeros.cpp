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
    ListNode* mergeNodes(ListNode* head) {
        int res = 0;
        vector<int> ans;
        ListNode* cur = head;
        ListNode* result = new ListNode();
        ListNode*  current = result;
        while(cur != NULL){
            if(cur ->val == 0 && res != 0){
                result->next =  new ListNode(res);
                result =  result->next;
                res = 0;
            }
            else{
                res += cur->val;
                cur = cur->next;
            }
        }
        
      
        
        return current->next;
    }
};