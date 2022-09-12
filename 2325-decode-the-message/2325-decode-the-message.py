class Solution:
    def decodeMessage(self, key: str, m: str) -> str:
        res ={}
        z = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
        j = 0
        for i in key :
            if i == " ":
                continue
            elif i not in res :
                res[i] =  z[j]
                j +=1
        ans = ""
        for i in m :
            if i == " ":
                ans +=  " "
                continue
            ans += res[i]
        return ans