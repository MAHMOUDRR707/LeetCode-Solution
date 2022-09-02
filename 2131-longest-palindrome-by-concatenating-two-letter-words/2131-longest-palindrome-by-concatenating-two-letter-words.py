class Solution:
    def longestPalindrome(self, words: List[str]) -> int:
        ans = 0 
        res = {}
        for i in words :
            t = i[::-1]
            if t in res and res[t] > 0:
                ans += 4
                res[t] -=1
            else:
                res[i]= res.get(i,0)+1
        for i in res :
            if i == i[::-1] and res[i] > 0 :
                ans += 2 
                return ans
        return (ans)
     