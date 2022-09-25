# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        res= []
        cur = head 
        while(cur):
            res.append(cur.val)
            cur = cur.next
        n = len(res)
        if n == 0 :
            return None
        if k ==  n :
            return head
        if k >  n :  
            k %= n
        left = res[n-k:]
        right =  res[:n-k]
        
        cur = ListNode()
        ans = cur
        
        for i in left :
            cur.next =  ListNode(i)
            cur = cur.next
            
        for i in right :
            cur.next =  ListNode(i)
            cur = cur.next
          
        
        return ans.next
        