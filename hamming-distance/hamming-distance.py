class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        x  =  bin(x)[2:]
        y = bin(y)[2:]
        n =  len(x)
        m =  len(y)
        z =  max(n,m)
        x =  '0'*(z-n) +  x
        y =  '0'*(z-m)+ y
        res = 0
        for i in range(z):
            if x[i] != y[i]:
                res+=1
        print(x,y)
        
        return res
        