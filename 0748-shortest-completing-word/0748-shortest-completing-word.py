class Solution:
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        res = []
        for i in licensePlate:
            if i.isdigit() or i == " ": 
                continue
            i =  i.lower()
            res.append(i)
        words.sort(key =  len)
        for i in words:
            h =  Counter(res)
            for j in i :
                if j in h  and h[j] > 0  :  
                    h[j] -=1
            #print(h)
            if sum(list(h.values())) == 0:
                return i
        return ""
       
            