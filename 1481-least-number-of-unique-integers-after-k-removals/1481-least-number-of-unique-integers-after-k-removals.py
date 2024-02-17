class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        x =  {}
        for i  in arr :
            if i in x : 
                x[i] +=1
            else :
                x[i] = 1
        x =  dict(sorted(x.items(),key = lambda i:[i[1],i[0]]))
        new = []
        for i,j in x.items():
            n =  [i]*j
            new.extend(n)
        new =  new[k:]
        return (len(set(new)))