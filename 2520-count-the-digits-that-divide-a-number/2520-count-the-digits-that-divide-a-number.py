class Solution:
    def countDigits(self, num: int) -> int:
        res = str(num)
        ans = 0
        for i in res :
            if num%int(i) == 0 :
                ans += 1
        return ans