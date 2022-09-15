import numpy as np
class Solution:
    def findRotation(self, mat: List[List[int]], target: List[List[int]]) -> bool:
        for i in range(4) :
             mat = np.rot90(mat)
             mat = mat.tolist()
             #print(mat,type(mat))
             if mat == target:
                return True
        return False