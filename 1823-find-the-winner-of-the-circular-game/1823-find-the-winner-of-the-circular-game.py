class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        res = [i+1 for i in range(n)]
        point  = 1 
        while len(res) != 1  :
            helper =  k 
            while(helper > 1):
                y = res[0]
                res.pop(0)
                res.append(y)
                helper -= 1
            res.pop(0)
        return res[0]