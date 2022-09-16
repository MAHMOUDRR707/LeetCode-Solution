class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        x =  points[0][0] 
        y =  points[0][1]
        ans =0
        for i in range(1,len(points)) :
            ans +=  max((abs(points[i][0] -x ) , abs(points[i][1] -y )))
            x =  points[i][0]
            y = points[i][1]
        return ans