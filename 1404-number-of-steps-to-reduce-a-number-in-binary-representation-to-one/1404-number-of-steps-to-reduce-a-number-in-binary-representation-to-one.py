class Solution:
    def numSteps(self, s: str) -> int:
        s = int(s,2)
        ans = 0
        while s > 1:
            #print(s)
            if s%2 == 0 :
                s= s//2
            else :
                s  = (s+1)
            ans +=1
        return ans
        
        