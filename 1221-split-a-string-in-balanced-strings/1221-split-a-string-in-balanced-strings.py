class Solution:
    def balancedStringSplit(self, s: str) -> int:
        res = []
        ans =  0
        for i in s :
            if res == [] or i == res[-1] :
                res.append(i)
            else :
                res.pop()
                if res == []:
                    ans +=1 
        return ans