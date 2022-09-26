class Solution:
    def minimumSum(self, num: int) -> int:
        x = sorted([i for i in str(num)])
        return int(x[0]+x[2]) +int(x[1]+x[3])