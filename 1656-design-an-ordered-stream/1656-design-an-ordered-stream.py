class OrderedStream:

    def __init__(self, n: int):
        self.res =  [""]*n
        self.n = n
        self.count = 0
    def insert(self, idKey: int, value: str) -> List[str]:
        self.res[idKey-1] = value 
        helper  = []
        if self.count ==  idKey-1:
            while self.count < self.n and self.res[self.count] != "":
                helper.append(self.res[self.count])
                self.count +=1 
        return helper


# Your OrderedStream object will be instantiated and called as such:
# obj = OrderedStream(n)
# param_1 = obj.insert(idKey,value)