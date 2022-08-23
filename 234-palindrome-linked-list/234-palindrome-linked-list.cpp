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
    bool isPalindrome(ListNode* head) {
        ListNode* cur =  head;
        vector<int> left ; 
        vector<int>right;
        int count = 0;
        while(cur != NULL){
            count++;
            cur = cur->next;
        }
        if(count == 1){
            return true;
        }
        int x = 0;
        if(count%2 == 0){
            x  =  1;
        }
        count = count/2;
        int index = 0 ;
        
        ListNode* curr = head;
        while(curr !=  NULL){
            if(index  > count-x){
                right.push_back(curr->val);
            }
            else if(index < count){
                left.push_back(curr->val);
            }
            curr =  curr->next;
            index ++;
        }
        (left.begin(),left.end());
        reverse(right.begin(),right.end());
        if(left == right){
            return true;
        }
        return false;
        
    }
};