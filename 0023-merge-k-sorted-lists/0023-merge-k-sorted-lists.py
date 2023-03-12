# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        res = []
        for lis in lists :
            cur =  lis 
            while cur :
                res.append(cur.val)
                cur =  cur.next
        res.sort()
        cur = node =  ListNode(0)
        for i in res:
            cur.next =  ListNode(i)
            cur = cur.next
        return node.next
        