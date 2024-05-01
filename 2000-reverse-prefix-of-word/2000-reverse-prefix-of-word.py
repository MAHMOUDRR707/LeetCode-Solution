class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        res = ""
        i = 0
        while i < len(word):
            res +=  word[i]
            if word[i] ==  ch :
                res = res[::-1]
                break
            i +=1
        return res +  word[i+1:len(word)]