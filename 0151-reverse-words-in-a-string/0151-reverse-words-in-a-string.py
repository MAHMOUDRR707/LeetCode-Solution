class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.split(" ")
        ans = ""
        for i in s[::-1] : 
            if i == "":
                continue
            else :
                ans += i +" "
        
        return ans[:len(ans)- 1]
                