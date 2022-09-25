class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        res ={}
        for i in range(len(names)):
            res[heights[i]] =  names[i]
            
        res = dict(sorted(res.items(),key=  lambda x:x[0] ,reverse = True))
        
        return res.values()
            