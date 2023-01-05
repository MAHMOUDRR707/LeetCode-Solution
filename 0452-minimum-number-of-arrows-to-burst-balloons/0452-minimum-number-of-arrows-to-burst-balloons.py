class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points =  sorted(points, key = lambda x:x[1])
        ans = 1 
        res =  points[0][1]
        #print(points)
        for i,j in points: 
            if res < i :
                ans += 1
                res = j
        return ans