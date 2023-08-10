class Solution:
    def asteroidCollision(self, a: List[int]) -> List[int]:
        res = []
        ans = []
        
        for i in a : 
            if  i > 0  :
                res.append(i)
            else :
                while len(res) > 0 and res[-1] < abs(i) :
                    res.pop()
                    
                if len(res) == 0 :
                    ans.append(i)
                
                else :
                    if res[-1] == abs(i) :
                        res.pop()
        ans += res
        return ans
                
                
           