# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        result = ListNode()
        cur1=  l1 
        cur2 =  l2
        x1 = ""
        x2 = ""
        while cur1 :
            x1 += str(cur1.val)
            cur1 =cur1.next
        x1 = x1[::-1]
        print(x1)
        while cur2 :
            x2 += str(cur2.val)
            cur2 =cur2.next
        x2 = x2[::-1]
        print(x2)
        x3 = str(int(x1)+int(x2))
        x3 = x3[::-1]
        head = l3 = ListNode(x3[0]) 

        for i in  range(1,len(x3)) :
            l3.next=  ListNode(x3[i])  
            l3 = l3.next
        return head