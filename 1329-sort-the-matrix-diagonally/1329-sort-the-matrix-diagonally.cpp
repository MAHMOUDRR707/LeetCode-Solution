class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size() , n =  mat[0].size();
        map<int,priority_queue<int,vector<int>, greater<int>>> res;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0  ; j < n ; j++){
                res[i-j].push(mat[i][j]);
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0  ; j < n ; j++){
                mat[i][j] =  res[i-j].top(); 
                res[i-j].pop();
            }
        }
        return mat;
    }
};