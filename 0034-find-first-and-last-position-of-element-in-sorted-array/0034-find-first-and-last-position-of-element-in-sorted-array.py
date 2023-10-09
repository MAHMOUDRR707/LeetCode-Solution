class Solution:
    def searchRange(self, nums, target):
        n =  len(nums) 
        res = []
        for i in range(len(nums)):
            if nums[i] ==  target :
                res.append(i)
        
        if len(res) == 0 :
            return [-1,-1]
        
        if len(res) < 2 : 
            res.append(res[0])
        if len(res) >2 :
            res = [res[0],res[-1]]
        return res