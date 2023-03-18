class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n =  matrix.size() *  matrix[0].size();
        vector<int> res;
        int startcol = 0 , endcol = matrix[0].size() -1 ;
        int startrow =0 ,  endrow =  matrix.size() -1 ;
        
        while(res.size() < n){
            for(int i =  startcol ; res.size() <n and i <= endcol;i++) res.push_back(matrix[startrow][i]);
            startrow ++;
            for(int i =  startrow ; res.size() <n and i<= endrow ;i++) res.push_back(matrix[i][endcol]);
            endcol--;
            for(int i = endcol ; res.size() <n  and i >=startcol;i--)res.push_back(matrix[endrow][i]);
            endrow--;
            for(int i = endrow ;res.size() <n  and i>= startrow ;i--)res.push_back(matrix[i][startcol]);
            startcol++;
            
            //res.push_back(matrix[startrow][startcol]);
        }
        
        return res;
        
    }
};