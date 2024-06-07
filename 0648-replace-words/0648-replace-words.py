class Solution:
    def replaceWords(self, d: List[str], s: str) -> str:
        
        s =  s.split(" ")
        d.sort()
        for i in range(len(s))  :
            for j in d : 
                n = len(j)
                if s[i][:n] == j :
                    s[i] =  j
                    
        return " ".join(s)