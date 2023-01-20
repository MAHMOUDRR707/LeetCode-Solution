from itertools import combinations
class Solution:
    def findSubsequences(self, nums: List[int]) -> List[List[int]]:
        helper = []
        for i in range(2,len(nums)+1):
            helper.extend(list(combinations(nums,i)))
        ans = set()
        for i in helper :
           
            if list(i) == sorted(list(i)) :
                ans.add(tuple(i))
        #print(ans)
        return ans