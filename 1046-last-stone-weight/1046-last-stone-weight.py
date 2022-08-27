class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        res  = sorted(stones,reverse = True)
        
        while len(res) > 1 :
            x =  res[1] 
            y = res[0]
            #print(res)
            if x ==  y : 
                res = res[2:]
            else :
                s =  y -x 
                res = res[2:]
                res.append(s)
                res.sort(reverse = True)
        if not res : 
            return 0
        return res[0]
           