# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        
        def dfs(root):
            if root is None :
                return False
            elif identical(root,subRoot) :
                return True
            return  dfs(root.left)  or dfs(root.right)
        
        def identical(root1,root2):
            if root1 is None or root2 is None :
                return (root1 is None and root2 is None)
            
            return ((root1.val ==  root2.val) and identical(root1.left,root2.left)  and identical(root1.right,root2.right))
        
        return dfs(root)