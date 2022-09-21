class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        ans = []
        res = {}
        for  i in nums:
            if i not  in res :
                res[i] = 1
        for i in range(len(nums)):
            if i+1 not in res:
                ans.append(i+1)
        return ans