class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        res =  sorted(arr, key = lambda n:abs(n-x))
        ans = res[:k]
        print(ans)
        ans.sort()
        return ans