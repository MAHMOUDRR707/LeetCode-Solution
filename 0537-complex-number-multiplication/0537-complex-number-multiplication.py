class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        helper =  False
        num1 = num1.split("+")
        num2 = num2.split("+")
        x_1 =  int(num1[0])
        x_2 =  int(num2[0])
        minus = 1
        y = ""
        for i in (num1[1]) :
             if i.isdigit():
                    y+= i
             if i == "-":
                minus = -1
        y_1 = minus*int(y)
        
        y =""
        minus = 1
        for i in (num2[1]) :
             if i.isdigit():
                    y+= i
             if i == "-":
                minus = -1
                
        y_2 =  minus*int(y)
        
        return str(x_1*x_2 - y_1*y_2) + "+" + str(x_1*y_2 + y_1*x_2) + "i"