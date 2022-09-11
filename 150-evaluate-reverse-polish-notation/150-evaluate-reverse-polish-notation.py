import math as mt
class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack  =[]
        falg =  False
        for i in tokens :
            try :
                int(i)
                flag = True
            except :
                flag = False
            if flag:
                stack.append(int(i))
            else:
                x = int(stack.pop())
                y = int(stack.pop())
                if i =="*":
                    stack.append(y*x)
                elif i =="+":
                    stack.append(y+x)
                elif i == "-":
                    stack.append(y-x)
                else:
                    stack.append((y/x))
        #print(stack)
        return int(stack[-1])