class Solution:
    def getXORSum(self, arr1: List[int], arr2: List[int]) -> int:
        n =  len(arr1)
        m  =  len(arr2)
        ans = arr1[0]
        for i  in range(1,n):
            ans ^= arr1[i]
        res =  arr2[0]
        for j in range(1,m):
                res ^=  arr2[j]
        return res&ans