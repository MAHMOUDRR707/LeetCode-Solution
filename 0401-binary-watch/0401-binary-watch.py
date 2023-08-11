class Solution:
    def readBinaryWatch(self, turnedOn: int) -> List[str]:
        res = []
        for i in range(60):
            for j in range(12):
                if (bin(i)+bin(j)).count("1") ==  turnedOn :
                    res.append(str(j) + ":"+"%02d" %i)
        return res
                           
                    