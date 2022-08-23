class Solution {
public:
    int uniquePaths(int n, int m) {
        int res[n][m] ;
        for(int i = 0 ; i<n ;i++){
            for(int j = 0 ; j < m ;j++){
                if (i == 0 ){
                    res[i][j] = 1;
                }
                else if(j == 0 ){
                    res[i][j] = 1;
                }
                else if( i > 0 && j > 0 ){
                    res[i][j] =  res[i][j-1] + res[i-1][j];
                }
            }
        }
        return res[n-1][m-1];
    }
};