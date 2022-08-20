class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits) 
        x = ''
        for i in digits :
            x += str(i)
        x =  int(x) + 1
        x = str(x)
        z = []
        for i in x :
            z.append(int(i))
        return z
        
            
                
        