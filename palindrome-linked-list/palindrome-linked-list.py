# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        cur = head 
        count = 0 
        index = 0 
        res =[]
        while cur :
            count += 1 
            res.append(cur.val)
            cur =  cur.next
        if count%2 == 0 :
            if res[:count//2] == res[count//2:][::-1]:
                return True
            else:
                return False
        else:
             if res[:count//2] == res[count//2 +1 :][::-1]:
                return True
             else:
                return False
        
            
        