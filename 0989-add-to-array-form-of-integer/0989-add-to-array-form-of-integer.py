class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        s  = ""
        for i in num:
            s += str(i)
        
        ans =  int(s) +k
        s = str(ans)
        ans =[]
        for i in s :
            ans.append(int(i))
        return ans