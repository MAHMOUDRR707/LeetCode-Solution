class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        res = {}
        arr.sort()
        for i in arr :
            x =  bin(i).count('1')
            if x not in res :
                res[x] =  [i]
            else :
                res[x].append(i)
        
        res =  dict(sorted(res.items(),key = lambda x:x[0]))
        ans = []
        for i in res.values():
            for j in i:
                ans.append(j)
        return ans