import numpy as np
class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        ans = 0
        n =  len(grid)
        m =  len(grid[0])
        column = []
        row = []
        hpo = {}
        for i in range(n) :
            row.append(str(grid[i]))
            
        hpo = Counter(row)
        
        #print(hpo)
        
        res = np.transpose(np.array(grid)).tolist()
        
        for j in range(m):
            if str(res[j]) in  row :
                ans += hpo[str(res[j])]
        
            
        return ans 
            