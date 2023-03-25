from collections import Counter
class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        ans = 0
        res = {}
        for i in chars :
            if i in res: 
                res[i] +=1
            else :
                res[i] = 1
                
        for i in words :
            word = dict(Counter(i))
            helper =  0
            for j in word :
                 if j in res  and word[j] <=  res[j]:
                        helper += word[j]
            if len(i) ==  helper :
                ans +=  helper
        return ans
                
                