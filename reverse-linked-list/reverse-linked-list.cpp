#include <bits/stdc++.h>

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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* ans = head ;
         ListNode* prev =  nullptr;
         ListNode* x =  head;
        while(x != NULL){
            x =  ans->next;
            ans->next =  prev;
            prev =  ans;
            ans = x ;
        }
        head = prev;
        return head;
    }
};