from sortedcontainers import SortedList
class SORTracker:

    def __init__(self):
        self.res = SortedList()
        self.count = 0 
    def add(self, name: str, score: int) -> None:
        self.res.add([-score,name]);

    def get(self) -> str:
        ans = self.res[self.count][1]
        self.count +=1 
        return ans


# Your SORTracker object will be instantiated and called as such:
# obj = SORTracker()
# obj.add(name,score)
# param_2 = obj.get()