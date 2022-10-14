# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        cur = head
        res =[]
        if k == 1 :
            return head
        while cur :
            res.append(cur.val)
            cur = cur.next
        for i in range(0,len(res)-k+1,k):
            res[i:i+k] = res[i:i+k][::-1]
        x = ListNode()
        ans = x 
        for i in res :
            x.next =  ListNode(i)
            x = x.next
        return ans.next