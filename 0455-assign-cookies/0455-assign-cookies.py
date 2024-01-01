class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g =  sorted(g)
        s =  sorted(s)
        ans = 0
        for i in g :
            j = 0 
            while j < len(s):
                if s[j] >= i :
                    ans += 1
                    s.pop(j)
                    break
                j+=1
        return ans