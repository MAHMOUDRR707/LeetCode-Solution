class MedianFinder:

    def __init__(self):
        self.temp = []
        

    def addNum(self, num: int) -> None:
        self.temp.append(num)

    def findMedian(self) -> float:
        self.temp.sort()
        n = len(self.temp)
        if n%2 == 0 :
            med = n//2
            med = (self.temp[med] + self.temp[med-1] )/2
        else :
            med = n//2
            med =  self.temp[med]
        return med

# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()