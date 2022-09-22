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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *  cur =  head;
        int count = 0 ;
        while(cur != NULL){
            count++;
            cur = cur->next;
        }
         int mid =  count/2;
        if(mid == 0) return NULL;
         ListNode * current =  head ;
         ListNode * prev = NULL;
         
        int key = 0;
        while(key != mid){
            prev = current;
            current = current-> next;
            key ++;
        }
        prev->next = current ->next;
        current =  NULL;
        return head;
        
    }
};