class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        ans = []
        res = 1 
        while len(ans) != k :
            if res not in arr :
                ans.append(res)
            res+=1
        return ans[-1]