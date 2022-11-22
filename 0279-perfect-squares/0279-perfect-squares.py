from math import isqrt

class Solution:
    def numSquares(self, n: int, dp={}) -> int:
        return min((dp.update({s:self.numSquares(s)}) is None) * dp[s]
                   if (s:=n-k**2) not in dp else dp[s]
                   for k in range(1,isqrt(n)+1)) + 1 if n != isqrt(n)**2 else 1
