class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        l = 0 
        r =  len(nums)-1
        #if len(nums) == 
        while(l<r):
            m =  l + (r-l)//2
            if(m%2 == 0):
                if(nums[m] == nums[m+1]):
                    l =  m+1
                else :
                    r = m
            else :
                if(nums[m] !=  nums[m+1]):
                    l =  m+1
                else: 
                    r = m 
        return nums[l]