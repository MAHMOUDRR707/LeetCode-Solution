class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        res  =  Counter()
        ans =  0 
        hel = 0
        for i in nums :
            hel += i
            if hel%k == 0 :
                ans += 1
            ans += res[hel%k]
            res[hel%k] += 1 
                 
        
        return ans