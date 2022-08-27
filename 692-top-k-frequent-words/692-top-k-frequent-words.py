class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        res = {}
        for i in words :
            if i in res :
                res[i] +=1
            else :
                res[i] = 1 

        res = dict(sorted(res.items(),key = lambda x: (-x[1],x[0])))
        return (list(res.keys())[:k])