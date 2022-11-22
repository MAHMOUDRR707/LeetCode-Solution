class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        res = {}
        arr.sort()
        for i in  range(len(arr)-1) :
                j = i+1
                x  = arr[j] -  arr[i]
                if x in res :
                    res[x].append([arr[i],arr[j]])
                else :
                    res[x] = [[arr[i],arr[j]]]
        #print(res)
        res = dict(sorted(res.items() , key = lambda x:x[0]))
        #print(res)
        return list(res.values())[0]