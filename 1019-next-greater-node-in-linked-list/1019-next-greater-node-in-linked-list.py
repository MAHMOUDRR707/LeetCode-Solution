# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nextLargerNodes(self, head: Optional[ListNode]) -> List[int]:
        values = []
        stack = []
        cur = head 
        while  cur :
            values.append(cur.val)
            cur = cur.next
        
        ans = [0] * len(values)
        
        for i,value  in enumerate(values):
            while stack and values[stack[-1]] < value :
                small =  stack.pop()
                ans[small] = value
            stack.append(i)
        return ans