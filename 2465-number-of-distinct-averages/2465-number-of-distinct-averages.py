class Solution:
    def distinctAverages(self, nums: List[int]) -> int:
        helper =  set()
        nums =  sorted(nums)
        while  nums :
            mx =  nums.pop(0)
            mn =  nums.pop(len(nums)-1)
            helper.add((mx+mn)/2)
        return len(helper)