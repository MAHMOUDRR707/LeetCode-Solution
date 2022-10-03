# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def constructMaximumBinaryTree(self, nums: List[int]) -> Optional[TreeNode]:
        new_value = max(nums)
        index =  nums.index(new_value)
        node =  TreeNode(new_value)
        
        if(nums[:index]) :
            node.left = self.constructMaximumBinaryTree(nums[:index])
        if(nums[index+1:]):
            node.right =  self.constructMaximumBinaryTree(nums[1+index:])
        
        return node