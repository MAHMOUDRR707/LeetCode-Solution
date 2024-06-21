class Solution:
    def numberGame(self, nums: List[int]) -> List[int]:
        ans = [ ]
        nums.sort()
        while nums:
            x = nums.pop(0)
            y =  nums.pop(0)
            ans.append(y)
            ans.append(x)
        return ans