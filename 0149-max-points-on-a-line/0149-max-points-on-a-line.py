import collections
import math
class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        n = len(points)
        if n == 1 :
            return 1
        ans = 2
        for i in range(n):
            res =  collections.defaultdict(int)
            for j in range(n):
                if points[i] == points[j] :
                    continue
                res[math.atan2((points[j][1]-  points[i][1]),(points[j][0]-  points[i][0]))] +=1
            ans = max(ans, max(res.values())+1)
        return ans