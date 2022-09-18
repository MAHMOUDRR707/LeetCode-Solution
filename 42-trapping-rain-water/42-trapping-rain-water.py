class Solution:
    def trap(self, nums: List[int]) :
        l = 0 
        r = len(nums) -1 
        left =  nums[l]
        right =  nums[r]
        x = 0
        while l <r :
            if left < right :
                l +=1 
                left =  max(left,nums[l])
                x += (left - nums[l])
            else :
                r-=1
                right =  max(right,nums[r])
                x+= (right-nums[r])
        return (x)