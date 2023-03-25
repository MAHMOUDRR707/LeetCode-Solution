class Solution:
    def isPalindrome(self, s: str) -> bool:
        res = ""
        special_characters = ['`','~','@','#','$','%','^','&','*','(',')','-','+','=','{','[','}','}','?','!',
                       '|','\\',':',';','"','\'','<','>','/', '«', '•', '–', '…', '»', ']', '×',',','.','_']
        for i in s :
            if i == " " or  i in special_characters: 
                continue
            else :
                res += i.lower()
        if res == res[::-1] :
            return True
        return False