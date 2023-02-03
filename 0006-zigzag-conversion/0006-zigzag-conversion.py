class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1 :
            return s
        res = True
        ans = [""]*numRows
        i = 0 
        for char in s :
            ans[i]  += char
            if i == 0 or i == numRows-1 :
                res  =  not res     
            if res :
                i -= 1 
            else :
                i += 1
        return  "".join(ans)
            