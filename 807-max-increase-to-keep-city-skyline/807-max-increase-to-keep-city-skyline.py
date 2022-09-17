class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        col =  [max(c) for c in zip(*grid)]
        row = [ max(r) for r in grid]
        ans = 0
        #print(row,col)
        for r in range(len(grid)):
            for c in range(len(grid[r])) :
                ans += (min(row[r],col[c]) - grid[r][c])
        return ans