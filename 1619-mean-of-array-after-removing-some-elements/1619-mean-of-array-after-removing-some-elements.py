class Solution:
    def trimMean(self, arr: List[int]) -> float:
        arr.sort()
        n =  len(arr)
        x =  int(n *0.05)
        arr = arr[x:]
        n =  len(arr)
        arr = arr[:n-x]
        print(arr)
        return (sum(arr)/len(arr))
        