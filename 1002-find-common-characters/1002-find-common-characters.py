from collections import Counter
class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        res =  {}
        for i in words[0]:
            if i in res :
                res[i] +=1
            else :
                res[i] = 1
        for i in range(1,len(words)):
            x =((Counter(words[i])))
            helper =[]
            for j in res.keys() :
                if j not in x.elements():
                    helper.append(j)
                else :
                    res[j] =  min(res[j],x[j])
            for j in helper :
                res.pop(j)
        ans = []
        for i,j in res.items():
            for k in range(j):
                ans.append(i)
        return ans
            