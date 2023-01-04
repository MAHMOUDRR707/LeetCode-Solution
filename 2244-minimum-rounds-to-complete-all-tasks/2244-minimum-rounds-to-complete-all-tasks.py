class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        ans = 0
        res = {}
        for i in tasks :
            if i in res :
                res[i] += 1
            else :
                res[i] = 1 
        
        for i,j in res.items():
            if j < 2 :
                return -1
            while(res[i] > 0):
                if  res[i]%3 == 0 :
                    res[i] -=3 
                else :
                    res[i] -=2
                ans +=1
        return ans 