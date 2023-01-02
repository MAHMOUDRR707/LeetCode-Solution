class Solution:
    def capitalizeTitle(self, title: str) -> str:
        title =  title.lower()
        title = title.split(" ")
        for i in range(len(title)) :
            if len(title[i]) > 2 :
                x = title[i]
                y =  x[0].upper()
                y += x[1:]
                title[i] = y
        return  " ".join(title)