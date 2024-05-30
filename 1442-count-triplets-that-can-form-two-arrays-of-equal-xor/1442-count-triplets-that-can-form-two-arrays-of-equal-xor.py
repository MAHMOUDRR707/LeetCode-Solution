class Solution:
    def countTriplets(self, arr: List[int]) -> int:
        n = len(arr)
        res =  [0]*(n+1)
        for i in range(n):
            res[i+1] = arr[i] ^ res[i]
        
        ans = 0
        for i in range(n):
            for j in range(i+1,n):
                if res[j+1] ==  res[i] :
                    ans +=  j-i
        
        return ans