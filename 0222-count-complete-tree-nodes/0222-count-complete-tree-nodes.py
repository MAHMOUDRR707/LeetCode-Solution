# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def countNodes(self, root: Optional[TreeNode]) -> int:
        if root is None :
            return 0
        
        stack = []
        stack.append(root)
        count = 1
        while stack:
            node =  stack.pop()
            if node.left:
                stack.append(node.left)
                count +=1
            if node.right:
                stack.append(node.right)
                count +=1
        return(count)
                