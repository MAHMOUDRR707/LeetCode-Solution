class Solution:
    def myAtoi(self, s: str) -> int:
        if len(s) == 0 :
            return 0 
        s = s.strip()
        positve =  True
        if len(s) ==  0 :
            return 0
        
        if s[0] == '-':
            positve  =  False
            
        if s[0] == "-" or s[0] == "+":
            s =  s[1:]
        i = 0
        ans = 0
        while i < len(s) and s[i].isdigit():
            ans =  ans*10 +  int(s[i])
            i+=1
        if not positve:
            ans *=-1
        return max(-2**31,min(2**31 -1 ,ans))
        