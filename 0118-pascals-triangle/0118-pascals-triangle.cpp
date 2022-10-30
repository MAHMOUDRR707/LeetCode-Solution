class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>> z ;
      int y ;
        for(int i  =0 ; i < numRows ; i++){
         vector<int> x ;
         
         for (int j= 0 ; j < i+1;j++){
             x.push_back(1);
         }
        
         z.push_back(x);
         
         for (int k= 1 ; k < i;k++){
             y = z[i-1][k-1] + z[i-1][k]; 
             z[i][k]  = y ; 
         }
     }
         return z;
    }
   
};