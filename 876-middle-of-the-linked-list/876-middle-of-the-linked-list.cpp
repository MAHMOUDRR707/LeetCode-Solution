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
    ListNode* middleNode(ListNode* head) {
        
        ListNode*  cur =  head;
        int lenght = 0 ,start = 0;
        while(cur){
            
            lenght +=1;
            cur = cur->next;
        }
        cur =  head;
        lenght = lenght/2;
        while(start<lenght){
            cur = cur->next;
            start +=1;
        }
        return cur;
        
    }
};