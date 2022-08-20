#include<algorithm>
class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
     vector<int> res  ;
     res.push_back(startFuel);
     for(auto &i : stations){
         res.push_back(0);
     }
     for(int i =0 ; i < stations.size();i++){
         long location =  stations[i][0];
         long capacity =  stations[i][1];
         for(int j = i ; j > -1 ; j--){
             if (res[j] >= location){
                 if (res[j+1] <=  res[j]+capacity){
                      res[j+1] =    res[j]+capacity;
                 }
             }
         }
     }
     for(int i = 0 ; i<res.size();i++){
         long j =  res[i];
         if ( j >=  target) {
             return i;
         }
     }
        return -1;
    }
};