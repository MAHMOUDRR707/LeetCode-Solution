class Solution:
    def mostWordsFound(self, sen : List[str]) -> int:
        max_x = 0
        for i in sen :
            max_x = max(max_x , len(i.split(" ")))
        return max_x