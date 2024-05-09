class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        h =  sorted(happiness)
        #print(h)
        ans = 0 
        res = 0 
        for i in range(k):
            last =  h.pop()
            if last - res > 0: 
                ans  +=   last - res
            res +=1 
        return ans