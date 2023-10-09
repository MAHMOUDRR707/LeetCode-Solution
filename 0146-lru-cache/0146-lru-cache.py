class LRUCache:

    def __init__(self, capacity: int):
        self.c = capacity
        self.res = OrderedDict()

    def get(self, key: int) -> int:
        if key not in self.res:
            return -1
        else :
            self.res[key]  = self.res.pop(key)
            return self.res[key]

    def put(self, key: int, value: int) -> None:
        if key not in self.res:
            if len(self.res) ==  self.c : 
                self.res.popitem(last = False)
        else :
            self.res.pop(key)
        self.res[key] =  value


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)