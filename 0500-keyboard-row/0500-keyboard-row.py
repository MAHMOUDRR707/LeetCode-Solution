class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        res = ["qwertyuiop","asdfghjkl","zxcvbnm"]
        x = []
        z = {}
        for i in range(len(res)):
            for j in res[i] :
                z[j] = i 
        for i in  range(len(words)) :
            for j in  range(1,len(words[i])):
                    if z[words[i][j].lower() ]!= z[words[i][j-1].lower()]:
                            x.append(words[i])
                            break
        ans = []
        for i in words :
            if i not in x :
                ans.append(i)
        return (ans)