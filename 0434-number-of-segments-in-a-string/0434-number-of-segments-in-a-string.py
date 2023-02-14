class Solution:
    def countSegments(self, s: str) -> int:
        if len(s.replace(" ","")) == 0:
            return 0
        ans = 0
        res =  s.split(" ")
        for i in range(len(res)) :
            res[i] =  res[i].replace(" ","")
            if res[i] == "":
                ans +=1
        return len(res) - ans