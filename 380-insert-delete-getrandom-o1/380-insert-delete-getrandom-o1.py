
class RandomizedSet:

    def __init__(self):
        self.res = []

    def insert(self, val: int) -> bool:
        if val not in self.res:
            self.res.append(val)
            return True
        return False

    def remove(self, val: int) -> bool:
        if val  in self.res :
            self.res.pop(self.res.index(val))
            return True
        return False
    def getRandom(self) -> int:
        return random.choice(self.res)


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()