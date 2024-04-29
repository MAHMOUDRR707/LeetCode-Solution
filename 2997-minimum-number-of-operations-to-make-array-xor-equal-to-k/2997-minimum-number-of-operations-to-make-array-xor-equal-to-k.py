class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        x =  nums[0]
        for i in nums[1:]:
              x ^= i 

        return bin(x^k).count("1")