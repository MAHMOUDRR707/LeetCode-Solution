/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* cur = head ;
        ListNode *current =  head;
        while(current != NULL && current->next != NULL){
            cur = cur->next;
            current =  current->next->next;
            if(cur ==  current){
                return true;
            }
        }
        return false;
    }
};