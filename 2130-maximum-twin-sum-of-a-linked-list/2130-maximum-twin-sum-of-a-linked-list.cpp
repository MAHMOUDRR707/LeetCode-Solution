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
    int pairSum(ListNode* head) {
        int n =0 ;
        ListNode* cur = head;
        vector<int> res;
        while(cur != NULL){
            res.push_back(cur->val);
            n++;
            cur = cur->next;
        }
        
        int m =  (n/2) -1;
        int ans = 0 ;
        for(int i = 0 ; i <= m;i++){
            ans = max(ans,res[i]+res[n-1-i]);
        }
        return ans;
    }
};