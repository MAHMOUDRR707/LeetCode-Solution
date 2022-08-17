#include<algorithm>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int max_x = 0 , x =0;
     int min_x = prices[0] ;
     for(auto &i :prices){
         min_x =  min(i,min_x);
         x = i - min_x;
         max_x =  max(max_x,x);
     }
        return max_x;
    }
};