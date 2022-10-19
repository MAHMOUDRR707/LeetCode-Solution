class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        ans = 0 
        for i in words :
            x = 0 
            for j in i : 
                if j  in allowed :
                     x += 1
            if x == len(i) :
                ans+=1
        return ans