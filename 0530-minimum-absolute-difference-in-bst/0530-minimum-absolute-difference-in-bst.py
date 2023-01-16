# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        heigh =  10000000
        low = -10000000
        def helper(root,heigh,low):
            if root is None :
                return abs(heigh -low)
            left =  helper(root.left,heigh,root.val)
            right =  helper(root.right,root.val,low)
            return min(left,right)
        #print(ans)
        return helper(root,heigh,low)
