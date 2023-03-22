class Solution:
    def minScore(self, n: int, roads: List[List[int]]) -> int:
        res = [i for i in range(n)]
        helper = [float('inf')]*n
        
        def minmuim(c):
            while c!= res[c]:
                c = res[c]
            return c
        
        for i,j,c in roads :
            i,j =  minmuim(i-1) , minmuim(j-1)
            res[i] = res[j] =  min(i,j)
            helper[i]=  helper[j] =  min(helper[i],helper[j],c)
        return helper[0]