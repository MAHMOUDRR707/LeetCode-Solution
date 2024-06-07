class Solution:
    def isGood(self, nums: List[int]) -> bool:
        
        if len(nums) <2 :
            return False
        res =  Counter(nums)
        n =  len(nums) -1 
        
        nums.sort()
        for i  in  res : 
            if res[i] != 1 and i !=  n :
                return False
            if i == n and res[i] != 2 :
                return False
                
        
        for i in range(len(nums)):
            if i+1 not in nums and i < n :
                #print("F",i)
                return False
            
        return True