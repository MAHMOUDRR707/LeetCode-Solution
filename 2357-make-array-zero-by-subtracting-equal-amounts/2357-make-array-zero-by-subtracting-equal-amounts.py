class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        ans = 0 
        res = [i for i in nums if i  != 0]
        res =  sorted(res)
        while res :
            x =  res[0]
            res =  [ i-x for i in res if i-x!=0 ]
            ans +=1 
        return ans