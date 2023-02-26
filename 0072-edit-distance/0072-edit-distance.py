class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        n =  len(word1)
        m = len(word2)

        z = [[0]*(n+1) for i  in range(m+1)]
        for i in range(n+1):
            z[0][i] = i
            
        for i in range(m+1) : 
            z[i][0] = i
        
        for i in range(1,m+1):
            for j in range(1,n+1):
                if word1[j-1] == word2[i-1] :
                    z[i][j] =  z[i-1][j-1] 
                else :
                    z[i][j] =   min(z[i][j-1],z[i-1][j],z[i-1][j-1]) +1 
        x = z[-1][-1]
        return  x