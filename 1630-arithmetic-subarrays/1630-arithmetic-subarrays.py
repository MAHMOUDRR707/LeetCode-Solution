class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        n =  len(l)
        ans = [True]*n
        for i in range(n):
            z = nums[l[i] :r[i]+1]
            z.sort()
            x =  z[1] -z[0]
            for j in range(2,r[i]-l[i] +1  ):
                if ((z[j] - z[j-1]) != x):
                    ans[i] =  False
                    break
        return ans