"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]', res ={}) -> 'Optional[Node]':
        if head is None :
            return 
        if head in res :
            return res[head]
        
        res[head] =  Node(head.val)
        res[head].next =  self.copyRandomList(head.next,res)
        res[head].random = self.copyRandomList(head.random,res)
        return res[head]
        