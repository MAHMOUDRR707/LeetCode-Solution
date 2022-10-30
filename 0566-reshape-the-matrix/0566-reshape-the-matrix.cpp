class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int  n = mat.size() , m =  mat[0].size();
        vector<int> z ;
        vector<vector<int>> x;
        if(n*m !=  c*r) return mat;
        
        for(int i = 0 ; i < n ;i++){
            for(int  j = 0 ;j<m;j++){
                z.push_back(mat[i][j]);
            }
        }
        reverse(z.begin(),z.end());
        for(int i = 0 ; i < r ;i++){
            vector<int>y;
            for(int  j = 0 ;j<c;j++){
                y.push_back(z.back());
                z.pop_back();
            }
            x.push_back(y);
        }
        return x;
    }
};