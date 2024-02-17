import heapq
class Solution:
    def furthestBuilding(self, heights: List[int], bricks: int, ladders: int) -> int:
        n =  len(heights)
        y = []
        for i in range(1,n):
            if heights[i] <= heights[i-1]  : 
                continue
            heapq.heappush(y,heights[i] - heights[i-1])
            if len(y)  >  ladders :
                bricks -= heapq.heappop(y)
                if bricks < 0 : 
                    return i-1
    
        return n- 1 