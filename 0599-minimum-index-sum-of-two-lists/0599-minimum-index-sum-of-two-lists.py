class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        x ={}
        helper ={}
        for i in range(len(list2)):
            helper[list2[i]] = i 
        for i in range(len(list1)):
            if list1[i] in list2 :
                y =  i + helper[list1[i]]
                if y in x.keys() : 
                    x[y].append(list1[i])
                else :
                    x[y] = [list1[i]]
        x = dict(sorted(x.items(), key=lambda item: item[0]))
        return list(x.values())[0]
                
                