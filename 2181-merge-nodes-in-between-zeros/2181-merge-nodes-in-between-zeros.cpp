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
        while(cur != NULL){
            if(cur ->val == 0 && res != 0){
                ans.push_back(res);
                res = 0;
            }
            res += cur->val ;
            cur = cur->next;
        }
        ListNode* result = new ListNode();
        ListNode*  current = result;
        for(auto &i : ans){
            result->next =  new ListNode(i);
            result = result->next;
        }
        return current->next;
    }
};