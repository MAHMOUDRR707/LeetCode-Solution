class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        #ans = 0
        ans = nums[0]
        n =  len(nums)
        for j in range(1,n):
            if nums[j]  == nums[j-1]+1 :
                ans += nums[j]
            else :
                break
        #ans =  max(res,ans)
        while ans in nums:
            ans +=1
        return ans
                