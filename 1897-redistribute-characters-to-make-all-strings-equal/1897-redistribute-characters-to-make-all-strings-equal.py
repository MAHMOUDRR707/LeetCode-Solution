class Solution:
    def makeEqual(self, words: List[str]) -> bool:
        res = {}
        for i in words :
            for j in i :
                if j in res :
                    res[j] +=1 
                else :
                    res[j] = 1
        
        n = len(words)
        for i,j in res.items() :
            if j%n != 0 :
                return False
        #print(res)
        return True