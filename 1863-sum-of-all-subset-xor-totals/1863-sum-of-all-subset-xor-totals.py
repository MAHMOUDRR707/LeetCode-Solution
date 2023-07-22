from itertools import combinations
class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        res = [0]
        for i in range(1,len(nums)+1):
            z= [list(j) for j in  combinations(nums,i)]
            res.extend([ reduce(lambda x, y: x ^ y,k) for k in z])
        #print(res)
        return sum(res)