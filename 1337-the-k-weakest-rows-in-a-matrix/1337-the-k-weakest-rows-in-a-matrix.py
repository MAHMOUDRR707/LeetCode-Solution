class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        res ={}
        count = 0
        for i in mat :
            #one =  i.count(1)
            zero =  i.count(0)
            res[count] = zero
            count +=1
        res = dict(sorted(res.items(),key = lambda x:(-x[1],x[0])))
        return list(res.keys())[:k]