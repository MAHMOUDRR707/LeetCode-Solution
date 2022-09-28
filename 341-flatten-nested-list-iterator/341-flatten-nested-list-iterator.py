# """
# This is the interface that allows for creating nested lists.
# You should not implement it, or speculate about its implementation
# """
#class NestedInteger:
#    def isInteger(self) -> bool:
#        """
#        @return True if this NestedInteger holds a single integer, rather than a nested list.
#        """
#
#    def getInteger(self) -> int:
#        """
#        @return the single integer that this NestedInteger holds, if it holds a single integer
#        Return None if this NestedInteger holds a nested list
#        """
#
#    def getList(self) -> [NestedInteger]:
#        """
#        @return the nested list that this NestedInteger holds, if it holds a nested list
#        Return None if this NestedInteger holds a single integer
#        """

class NestedIterator:
    def __init__(self, nestedList: [NestedInteger]):
            self.index = 0 
            self.res = []
            
            def getVal(nested) :
                val = []
                if nested.isInteger():
                    val.append(nested.getInteger())
                else :
                    for i in nested.getList() :
                        val.extend(getVal(i))
                return val
            
            for i in nestedList:
                self.res.extend(getVal(i))
    def next(self) -> int:
        out = self.res[self.index]
        self.index +=1
        return out
    
    def hasNext(self) -> bool:
        if len(self.res) == self.index: 
            return False
        else :
            return True
# Your NestedIterator object will be instantiated and called as such:
# i, v = NestedIterator(nestedList), []
# while i.hasNext(): v.append(i.next())