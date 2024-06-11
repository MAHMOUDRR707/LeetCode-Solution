class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        res = {}
        for i in range(len(arr2)):
            res[arr2[i]] = i
        
        helper =  Counter(arr1)
        arr = list(set(arr1))
        ans = []
        rest = []
        for i in arr1:
            if not i in res:
                rest.append(i)
        
        for i in res : 
            ans.append(i)
            for j in range(helper[i]-1):
                ans.append(i)
        rest.sort()
        ans.extend(rest)
        return ans 
            
        
              