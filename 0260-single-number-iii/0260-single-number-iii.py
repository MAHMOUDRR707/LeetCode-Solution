class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        z = []
        l =  set(nums)
        for i in l :
            if nums.count(i) == 1 :
                z.append(i)
        return z