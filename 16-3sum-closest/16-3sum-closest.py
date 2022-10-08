class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        x  , min_x,res  = 0,100000000,0
        n= len(nums)
        s = 0
        nums.sort()
        for i in range(n-2):
            if i > 0  and nums[i] ==  nums[i-1]:
                continue
            l = i+1
            r = n -1
            while l <r:
                s =  nums[i] + nums[l] + nums[r]
                if abs(target -  s) < min_x :
                    min_x  = abs(target -  s)
                    res =  s
                if s >  target :
                    r-=1
                elif s < target :
                    l +=1 
                else :
                    return target
        
        return res