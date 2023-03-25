class Solution:
    def rearrangeCharacters(self, s: str, target: str) -> int:
        res = {}
        for i in target :
            if i in res :
                res[i] +=1
            else :
                res[i] = 1 
        helper = {}
        for j in s :
            if j in helper: 
                helper[j] +=1
            else :
                helper[j] =1 
        #ans = list(dict(sorted(helper.items(), key = lambda x:x[1])).values())[0]
        ans = 100000000
        for i in res :
          if i in helper :
            ans = min(ans,helper[i]//res[i])
          else :
            return 0
        return ans
        