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
        map<int,int> res;
        vector<int> ans;
        ListNode* cur = head;
        int i = 0 ;
        if(head == NULL){
            return NULL;
        }
        while(cur !=  NULL){
            res[cur->val]++;
            cur =  cur->next;     
        }
        
        for(auto &i : res){
            if(i.second == 1 ){
                ans.push_back(i.first);
            }
        }
        
        ListNode *  pre =  new ListNode(0);
        ListNode *tail = pre;
        for(int i= 0 ; i < ans.size();i++){
            tail->next =  new ListNode(ans[i]);
            tail =  tail->next;
        }
        return pre->next;
    }
};