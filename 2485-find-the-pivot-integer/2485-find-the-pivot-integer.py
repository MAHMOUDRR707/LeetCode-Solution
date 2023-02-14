class Solution:
    def pivotInteger(self, n: int) -> int:
        res =  sum([i for i in range(1,n+1)])
        helper = 0
        ans = -1
        for i in range(1,n+1) :
             helper += i 
             if helper == res :
                    ans =  i 
                    break
             res -= i
        return ans