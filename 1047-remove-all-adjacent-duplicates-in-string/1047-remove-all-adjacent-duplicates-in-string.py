class Solution:
    def removeDuplicates(self, s: str) -> str:
        x = ''
        for i in s :
            x += i
        i  = 0
        n = len(s)
        while i < len(s)-1 :
            if s[i] == s[i+1] :
                s =  s[:i] + s[i+2:]
                
                i =  max(i-1,0)
            else :
                i+=1
        return(s)