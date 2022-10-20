class Solution:
    def intToRoman(self, s) :
        d = ''
        x = str(s)
        n = len(x)
        z={'M':1000,'CM':900,'D':500,'CD':400,'C':100,'XC':90,'L':50,'XL':40,'X':10,'IX':9,'V':5,'IV':4,'I':1}
        for i,j in z.items() :
            d += i * (s//j)
            s = s%j
        return d    