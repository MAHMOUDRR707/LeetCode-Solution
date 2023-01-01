class Solution:
    def wordPattern(self, p: str, s: str) -> bool:
        res = {}
        
        s =  s.split(" ")
        if len(p) != len(s):
            return False
        for i in  range(len(p)) :
            if p[i] in res :
                if s[i] != res[p[i]]:
                    return False   
            else :
                res[p[i]] =  s[i]
        res2 = {}
        for i in  range(len(s)) :
            if s[i] in res2 :
                if p[i] != res2[s[i]]:
                    return False   
            else :
                res2[s[i]] =  p[i]
        return True