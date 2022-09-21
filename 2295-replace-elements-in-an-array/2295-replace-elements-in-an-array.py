class Solution:
    def arrayChange(self, nums: List[int], o: List[List[int]]) -> List[int]:
        res  = {}
        for i in range(len(nums)):
            res[nums[i]] =  i;
            
        for i in range(len(o)):
            x = o[i][0]
            y = o[i][1]
            index =  res[x]
            nums[index] =  y
            del res[x]
            res[y] = index
       
        return nums