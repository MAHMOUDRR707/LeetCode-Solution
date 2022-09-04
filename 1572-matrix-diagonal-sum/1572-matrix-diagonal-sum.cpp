class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int  l = 0 , r =  mat.size()-1;
        int s = 0;
        for(int i =0 ;i <mat.size();i++){
            if(l==r) s+= mat[i][l];
            else{
                s+=mat[i][l];
                s+=mat[i][r];
            }
            l++;
            r--;
        }
        return s;
    }
};