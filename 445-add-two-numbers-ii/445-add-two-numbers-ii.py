# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
 

        res = ListNode() 
        ans = res
        count1 = 0
        count2 = 0 
        cur1 =  l1 
        cur2 = l2 
        if(l1.val == 0 and l2.val == 0):
            return l1
        if(l1.val == 0 ):
            return l2
        if(l2.val == 0) :
            return l1
        while(cur1) :
            count1 =  count1*10 + cur1.val
            cur1 = cur1.next
        
        
        while(cur2) :
            count2 = count2*10 + cur2.val
            cur2 = cur2.next
        
        
        n = count1 +count2
        z= [] 
        while(n > 0):
            z.append(n%10)
            n = n//10
        for i in range(len(z)-1,-1,-1):
            res.next =   ListNode(z[i])
            res = res.next
        
        return ans.next