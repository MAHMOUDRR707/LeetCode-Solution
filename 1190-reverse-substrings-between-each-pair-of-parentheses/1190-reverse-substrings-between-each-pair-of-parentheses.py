class Solution:
    def reverseParentheses(self, s: str) -> str:
        while '(' in s :
            index = 0
            for i in range(len(s)):
                if s[i] == '(':
                    index = i
                elif s[i] == ')':
                    s = s.replace(s[index:i+1],s[index+1:i][::-1])
                    break
        return s