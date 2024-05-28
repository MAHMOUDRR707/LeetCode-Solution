class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        l = 0
        for i in range(len(s)):
            maxCost -= abs(ord(t[i]) - ord(s[i]))
            if maxCost < 0:
                maxCost +=  abs(ord(t[l]) - ord(s[l]))
                l +=1
            
        return len(s) - l