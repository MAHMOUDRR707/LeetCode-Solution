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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head){
            return head;
        }
        int count = 0;
        ListNode* cur = head;
        ListNode* prev = head;
        while(cur !=  NULL){
            cur =  cur->next;
            count++;
        }
        int c = count -n;
        if(c==0){
            return head->next;
        }
        int x = 1;
        while(prev){
            if(c == x){
                prev->next = prev->next->next;
                break;
            }
            x+=1;
            prev = prev->next;
        }
        return head;
    }
};