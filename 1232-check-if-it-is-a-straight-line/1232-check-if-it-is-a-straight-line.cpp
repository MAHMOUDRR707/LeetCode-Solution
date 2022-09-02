class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double m = coordinates[0][0] , n =   coordinates[0][1] ;
        double l = coordinates[1][0] , r =   coordinates[1][1] ;
        for(int i = 2 ;i< coordinates.size();i++ ){
            vector<int> v =  coordinates[i];
            double x =  v[0] , y = v[1];
          
            if(helper(x,y,l,m,n,r)) return false;
            
        }
        return true;
    }
    bool helper(int x , int y , int l  , int m , int n , int r){
       
         if(l == m ) {
              cout << "he";
              return  x != m;
          }
        else if (r==n){
            return y !=  n;
        }
        else {
        return (x-m)/(m-l) != (y-n)/(n-r);
    }
    }
};