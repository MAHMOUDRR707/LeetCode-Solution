# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def doubleIt(self, head: Optional[ListNode]) -> Optional[ListNode]:
        cur  =  head
        stk = []
        while cur :
            stk.append(cur.val)
            cur = cur.next
        
        val = 0 
        ans  = None
        
        while stk or val != 0 :
            ans =  ListNode(0,ans)
            if stk :
                val +=  stk.pop()*2
            ans.val =  val%10
            #ans = ans.next
            val //= 10
        return ans