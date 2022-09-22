class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        res = {}
        ans =""
        for i in range(len(s)) :
             res[indices[i]] =  s[i]
            
        res = dict(sorted(res.items() , key = lambda x :x[0]))
        return "".join(list(res.values()))