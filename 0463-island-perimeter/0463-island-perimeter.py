class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        n =  len(grid)
        m =  len(grid[0])
        ans = 0 
        for i in range(n):
            for j in range(m):
                if grid[i][j] == 1 :
                    ans += 4
                    if i > 0 and grid[i-1][j] == 1 :
                        ans -=1
                    if j > 0  and grid[i][j-1] == 1 :
                        ans -= 1
                    if i < n-1 and grid[i+1][j] == 1 :
                        ans -=1
                    if j < m-1  and grid[i][j+1] == 1 :
                        ans -= 1 
                        
        #print(ans)
        return ans