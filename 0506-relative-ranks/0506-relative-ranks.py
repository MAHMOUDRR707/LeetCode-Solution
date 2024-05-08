class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        res = {}
        rank = 1 
        for i in sorted(score):
            res[i] =  rank
            rank +=1 
        ans = []
        n =  len(score)
        for i in score :
            if res[i] == n :
                ans.append("Gold Medal")
            elif res[i] == n-1 :
                ans.append("Silver Medal")
            elif res[i] == n-2 :
                ans.append("Bronze Medal")
            else :
                ans.append(str(n - res[i] +1))
        return ans
                