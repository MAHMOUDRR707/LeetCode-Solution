class Solution:
    def countEven(self, num: int) -> int:
        ans = 0
        for i in range(1,num+1):
            res = map(int,list(str(i)))
            res =  sum(res)
            if res%2 == 0 :
                ans +=1         
        return ans