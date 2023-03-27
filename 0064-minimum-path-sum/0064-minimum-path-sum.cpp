#include<algorithm> 
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n =  grid.size();
        int m =  grid[0].size();
        int res[n][m] ;
         for(int i = 0 ;  i < n ;  i++ ){
            for (int j =0 ; j < m ; j++){
                res[i][j] = 0 ;
                }
         }
        res[0][0] = grid[0][0];
        for(int i = 0 ;  i < n ;  i++ ){
            for (int j =0 ; j < m ; j++){
                if (i-1 < 0 && j >0){
                res[i][j] = res[i][j-1] +  grid[i][j];
                    }
                if (j-1 < 0 && i >0){
                res[i][j] = res[i-1][j] +  grid[i][j];
                    }
                if (i-1 >= 0 && j-1 >=0){
                res[i][j] = min(res[i-1][j],res[i][j-1]) +  grid[i][j];
                    }
                    }
        }
        return res[n-1][m-1];
    }
    
};