class Solution:
    def alternateDigitSum(self, n: int) -> int:
        ans = 0 
        res = str(n)
        for  i in range(len(res)) :
            if i%2 == 0 :
                 ans += int(res[i])
            else :
                ans -=  int(res[i])
        return ans