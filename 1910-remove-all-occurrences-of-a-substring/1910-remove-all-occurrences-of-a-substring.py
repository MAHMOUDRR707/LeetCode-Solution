class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        x = s.find(part)
        l = len(part)
        while(x != -1):
            s = s[:x] + s[x+l:]
            x =  s.find(part)
        
        return s