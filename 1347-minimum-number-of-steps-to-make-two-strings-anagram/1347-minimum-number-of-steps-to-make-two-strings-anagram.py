class Solution:
    def minSteps(self, s: str, t: str) -> int:
        x = {}
        y = {}
        for i in s :
            if i in x :
                x[i] += 1
            else :
                x[i] = 1 
        for i in t :
            if i in y : 
                y[i]+=1
            else :
                y[i] = 1 
        ans  = 0 
        for i,j in x.items():
            if i in y :
                if j > y[i] :
                    ans +=  j-y[i]
            else :
                ans +=  j
        return (ans)