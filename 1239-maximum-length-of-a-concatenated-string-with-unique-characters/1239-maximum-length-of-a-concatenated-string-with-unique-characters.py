class Solution:
    def maxLength(self, arr: List[str]) -> int:
        ans = 0 
        n =  len(arr)
        res = [""]
        for i in arr: 
            for j in res:
                x = i+j
                if(len(x) != len(set(x))):
                    continue
                res.append(x)
                ans = max(ans , len(x))
        return (ans)
            