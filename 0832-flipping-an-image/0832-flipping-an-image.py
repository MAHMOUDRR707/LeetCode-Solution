class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        ans = []
        for l  in range(len(image)):
            res = image[l][::-1]
            
            for i in range(len(res)):
                if res[i] == 0 :
                    res[i] = 1
                else :
                    res[i] = 0
            #print(res)
            ans.append(res)
        return ans
        
        