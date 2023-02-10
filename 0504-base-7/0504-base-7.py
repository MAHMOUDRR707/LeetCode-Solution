class Solution:
    def convertToBase7(self, num: int) -> str:
        ans = ""
        negative = ""
        if num < 0 :
            negative = "-"
            num *=-1
        while num >=7 :
            ans +=  str(num%7)
            num //= 7
        ans +=  str(num)
        return negative +ans[::-1]