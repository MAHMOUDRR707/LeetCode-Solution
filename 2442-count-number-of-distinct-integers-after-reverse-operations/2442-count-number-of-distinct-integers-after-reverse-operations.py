class Solution:
    def countDistinctIntegers(self, nums: List[int]) -> int:
        res =  set()
        for i in nums :
            res.add(i)
        for i in nums :
            x =  int(str(i)[::-1])
            res.add(x)
        return len(res)