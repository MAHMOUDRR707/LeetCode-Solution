#link:
#time:o(n**2)
class Solution:
    def isValidSudoku(self, board) :
        
        for i in range(len(board)):
             if not self.rows(board,i):
                    return False
                
        for j in range(len(board)):
            if not self.columns(board,j) :
                return False
    
        for i in range(0,9,3):
            for j in range(0,9,3):
                 if not self.matrixs(board,i,j) :
                     return False
        return True
    
    def rows(self,board,n_row):
        rows = []
        for i in range(9) :
            if board[n_row][i] != '.' and  board[n_row][i] in rows :
                return False
            else :
                rows.append(board[n_row][i] ) 
        return True
    
    def columns(self,board,n_col):
        columns = []
        for j in range(9) :
            if board[j][n_col] != '.' and  board[j][n_col] in columns :
                return False
            else :
                columns.append(board[j][n_col] ) 
        return True
    
    def matrixs(self,board,s,e):
        matrix = []
        for i in range(3):
            for j in range(3) :
                if board[s+i][j+e] != '.' and board[i+s][j+e]  in matrix :
                    return False
                else :
                    matrix.append( board[i+s][j+e])
        return True



