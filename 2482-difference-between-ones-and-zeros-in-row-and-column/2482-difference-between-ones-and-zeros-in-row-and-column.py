class Solution:
    def onesMinusZeros(self, grid: List[List[int]]) -> List[List[int]]:
        n = len(grid)
        m = len(grid[0])
        one_col = [0]*m
        zero_col = [0]*m
        one_row = [0]*n
        zero_row = [0]*n
        for i in range(n) :
            for j in range(m):
                if grid[i][j] == 1:
                    one_col[j] +=1 
                    one_row[i] +=1 
                else :
                    zero_col[j] +=1 
                    zero_row[i] +=1 
                    
        ans = []
        for i in range(n) :
            ans.append([0]*m)
            for j in range(m):
                ans[i][j] = one_row[i] + one_col[j] - zero_row[i] - zero_col[j]
        return ans
                