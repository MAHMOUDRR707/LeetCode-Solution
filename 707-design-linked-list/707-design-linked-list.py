class Node :
    def __init__(self,data = 0, next = None):
        self.data =  data
        self.next =next
class MyLinkedList:

    def __init__(self):
        self.head = None
        self.size =  0
    def get(self, index: int) -> int:
        
        if index < 0 or index >=  self.size or self.head is None :
            return -1
        
        cur = self.head
        for i in range(index):
            cur = cur.next
        return cur.data
 

    def addAtHead(self, val: int) -> None:
        
        new =  Node(val,self.head)
        self.head = new
        self.size +=1

    def addAtTail(self, val: int) -> None:
        
        if self.head is None :
            self.head = Node(val,None)
            self.size +=1
            return
        
        cur = self.head
        while(cur.next):
            cur = cur.next
        cur.next = Node(val,None)
        self.size +=1
        


    def addAtIndex(self, index: int, val: int) -> None:
        cur = self.head 
        if index < 0  or index > self.size:
            return
        if(index ==  0 or self.head is None) :
            self.addAtHead(val)
            return 
        
        count = 0
        while(cur):
            
            if(count == index-1):
                new =  Node(val,cur.next)
                cur.next = new
            count +=1
            cur = cur.next
        
        self.size +=1
                
    def deleteAtIndex(self, index: int) -> None:
        
        if index < 0 or index >= self.size :
            return 
        
        count = 0
        cur = self.head
        if index ==  0:
            self.head =  cur.next
            return 
        
        prev = None
        while(cur and count != index):
            prev = cur 
            cur = cur.next
            if cur is None:
                return
            count +=1
        prev.next =  cur.next
        cur = None
        self.size -=1 

# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)