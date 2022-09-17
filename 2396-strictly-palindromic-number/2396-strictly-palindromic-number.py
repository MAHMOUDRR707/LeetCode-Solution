class Solution:
    def isStrictlyPalindromic(self, n: int) -> bool:
        for  i in range(2,n-1):
            x =  bin(n)[i:]
            if len(x) == 0 or x !=  x[::-1]:
                return False
        return True