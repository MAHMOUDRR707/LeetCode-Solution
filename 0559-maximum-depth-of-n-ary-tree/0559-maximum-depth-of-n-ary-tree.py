"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        stack = []
        if root :
            stack += [(root,1)]
        
        max_depth = 0 
        while stack : 
            node,depth = stack.pop()
            max_depth = max(depth,max_depth)
            for i in node.children:
                stack += [(i, depth+1)]  
        return max_depth