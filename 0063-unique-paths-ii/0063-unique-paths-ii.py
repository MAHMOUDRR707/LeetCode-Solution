class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]):
        m =  len(obstacleGrid[0])
        n =  len(obstacleGrid)
        
        if obstacleGrid[0][0] == 1 :
            return 0
        
        obstacleGrid[0][0] = 1 
        
        for i in range(1,n):
            obstacleGrid[i][0] = int(obstacleGrid[i][0] == 0  and obstacleGrid[i-1][0] == 1)
            
        for i in range(1,m):
            obstacleGrid[0][i] =  int((obstacleGrid[0][i] == 0 and obstacleGrid[0][i-1] == 1))
        
        print(obstacleGrid)
        for i in range(1,n):
            for j in range(1,m):
                if obstacleGrid[i][j] == 0 :
                    obstacleGrid[i][j] = obstacleGrid[i-1][j] + obstacleGrid[i][j-1]
                else :
                    obstacleGrid[i][j] = 0

        return obstacleGrid[n-1][m-1]