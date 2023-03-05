class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        if len(nums) == 1 :
            return nums[0]
        
        while len(nums)  > 1 :
            ans = []
            for i in range(len(nums)-1):
                x =  nums[i]+nums[i+1]
                if x >= 10 :
                    x = int(str(x)[1])
                ans.append(x)
            nums = ans
        return nums[0]
            