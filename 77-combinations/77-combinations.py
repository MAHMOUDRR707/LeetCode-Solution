from itertools import combinations
class Solution:
    def combine(self, n, k ):
        z = combinations(range(1,n+1),k)
        return z
