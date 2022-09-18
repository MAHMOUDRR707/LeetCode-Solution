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
    int numComponents(ListNode* head, vector<int>& nums) {
        int count = 0;
        ListNode* cur = head;
        bool flag = true;
        while(cur != NULL){
            if(find(nums.begin(),nums.end(),cur->val) != nums.end()){
                if(flag){
                    flag = false;
                    count++;
                }
            }
            else{
                flag = true;
                
            }
            
            cur = cur->next;
        }
        return count;
    }
};