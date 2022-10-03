class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int max_x = 0 , ans =0 ;
        for(int i = 0 ;i <  colors.size() ;i++){
            if(i > 0 && colors[i] !=  colors[i-1])  max_x =0; 
            ans +=  min(max_x, neededTime[i]);
            max_x  =  max(max_x,neededTime[i]);
        }
        return ans;
    }
};