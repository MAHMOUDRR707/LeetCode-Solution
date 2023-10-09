class Solution:
    def searchRange(self, nums, target):
        n =  len(nums) 
        f = 0
        l =  n-1
        while l >= f :
            mid =  (l+f)//2  
            if nums[mid] == target :
                first ,last =  mid,mid
                while last != n- 1 and nums[mid] == nums[last+1]  :
                    last +=1
                while  first != 0 and nums[mid] == nums[first-1] :
                    first -= 1 
    
                return [first,last]
            
            elif nums[mid] <  target :
                f =  mid+1
            elif nums[mid] > target  :
                l =  mid-1
        return [-1,-1]