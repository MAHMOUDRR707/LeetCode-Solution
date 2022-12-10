class Solution:
    def sortJumbled(self, mapping: List[int], nums: List[int]) -> List[int]:
        res = {}
        for i in nums :
            x = str(i)
            y =""
            for  j in x :
                y+=str(mapping[int(j)])
            
            y =  int(y)
            if y in res:
                res[y].append(i)
            else :
                res[y] = [i]
        res = dict(sorted(res.items(),key = lambda x:(x[0])))
        ans  = []
        for i,j in res.items():
            ans.extend(j)
        return ans
        