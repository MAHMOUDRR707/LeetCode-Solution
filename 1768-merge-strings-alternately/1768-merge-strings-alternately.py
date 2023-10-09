class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans = ""
        i = 0
        j = 0 
        while len(word1)  >i and len(word2) >j :
            ans += word1[i]
            ans += word2[j]
            i+=1
            j+=1
        while len(word1) > i  :
            ans +=  word1[i]
            i+=1
           # word1.pop(0)
        #k = 0
        while len(word2) > j  :
            ans +=  word2[j]
            j+=1
           # word1.pop(0)
        return ans