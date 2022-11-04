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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> res;
        ListNode *  cur = head ;
        while(cur != NULL){
            res.insert(cur->val);
            cur = cur->next;
        }
        ListNode  *  ans =  new ListNode();
        ListNode * anss =  ans;
        for(auto &i :  res){
            ans->next  =  new ListNode(i);
            ans = ans->next;
        }
        
        return anss->next;
        
    }
};