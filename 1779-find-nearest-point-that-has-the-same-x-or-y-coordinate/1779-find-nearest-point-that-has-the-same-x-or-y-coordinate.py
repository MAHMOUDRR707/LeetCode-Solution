class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        res = {}
        index = 0 
        for n,m in points :
            if x ==  n   or m == y :
                z =  abs(n-x) + abs(y-m)
                res[index] =  z
            index +=1
        #print(res)
        z =  dict(sorted(res.items(),key =  lambda x:(x[1],x[0])))
        #print(z)
        z =  list(z.keys())
        if not z :
            return -1
        return z[0]