class Solution:
    def numDecodings(self, s: str) -> int:
        n =  len(s)
        res= {n:1}
        
        for i in  range(n-1,-1,-1):
            if(s[i] == "0"):
                res[i] =0 
            else :
                res[i] = res[i+1]
            
            if  i+1 <n and (s[i] =='1' or (s[i] == '2' and int(s[i+1])  <= 6) ):
                res[i] +=  res[i+2]
        return res[0]
        