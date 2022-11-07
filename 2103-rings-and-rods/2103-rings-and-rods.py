class Solution:
    def countPoints(self, rings: str) -> int:
        res = [[] for  i in range(10)]
        ans = 0
        for i in range(0,len(rings)-1,2):
            color =  rings[i]
            pos =  int(rings[i+1])
            
            if color not in res[pos] :
                res[pos].append(color)
                
        for i in (res):
            if (len(i) == 3) :
                ans+=1
        return ans
