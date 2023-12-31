class Solution:
    def maxLengthBetweenEqualCharacters(self, s: str) -> int:
        res = {}
        
        ans = -1
        for i in range(len(s)):
            if s[i]  in res :
                ans = max(ans,i-res[s[i]]-1)
            else :
                res[s[i]] = i 
        return ans