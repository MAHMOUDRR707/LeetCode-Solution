class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        res =[]
        for i in brokenLetters:
            res.append(i)
        
        ans = 0
        for i in text.split(" "):
            for j in i :
                if j in res :
                    ans +=1
                    break
        return len(text.split(" ")) - ans