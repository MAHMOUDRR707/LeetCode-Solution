class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l  =0 , r =  matrix.size()-1;
        while (r >l){
            for(int i = 0 ; i <r-l ; i++){
                int top = l  , bot = r; 
                int topleft =  matrix[top][i+l];
                matrix[top][i+l] =   matrix[bot - i][l];
                matrix[bot -i ][l] =  matrix[bot][r-i];
                matrix[bot][r-i] =  matrix[top+i][r];
                matrix[top+i][r]=  topleft ;
                
                    
                
            }
            r-=1;
            l+=1;
        }
    }
};