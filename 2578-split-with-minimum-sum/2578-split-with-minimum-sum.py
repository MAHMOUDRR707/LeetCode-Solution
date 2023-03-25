from itertools import permutations
class Solution:
    def splitNum(self, num: int) -> int:
        x = "".join(sorted(str(num)))
        #print(x)
        num1 =  int(x[::2])
        num2 =  int(x[1::2])
        return num1+num2
        