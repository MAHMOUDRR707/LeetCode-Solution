class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        he = {}
        res = []
        for i in range(len(s)):
            if s[i].isalpha() : 
                res.append(s[i])
            else:
                he[i] = s[i]
        res = res[::-1]
        ans = ""
        for i in range(len(s)):
            if i in he :
                ans += he[i]
            else :
                ans += res.pop(0)
        return ans