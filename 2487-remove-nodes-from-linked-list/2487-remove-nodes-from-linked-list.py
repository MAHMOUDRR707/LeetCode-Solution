# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        res =  head 
        h = []
        while  res != None:
            h.append(res.val)
            res = res.next
        #h = h[::-1]
        x = h[-1]
        res = [x]
        for i in range(len(h)-2,-1,-1):
            if h[i] >=  x :
                x =  h[i]
                res.append(x)
        res = res[::-1]
        ans =   ListNode()
        xx = ans
        for i in res :
            ans.next =  ListNode(i)
            ans = ans.next
        return xx.next
            
            