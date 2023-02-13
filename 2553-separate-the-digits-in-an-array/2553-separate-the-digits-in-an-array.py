class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        ans = []
        for i in nums : 
            res =  map(int,list(str(i)))
            ans.extend(res)
        return ans