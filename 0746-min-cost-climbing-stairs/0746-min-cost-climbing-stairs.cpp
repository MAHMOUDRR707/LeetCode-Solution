class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n =  cost.size();
        int x =  cost[n-2];
        int y =  cost[n-1];
        for(int i = n- 3 ;i >-1 ; i-- ){
            int z = x;
            x =  min(cost[i] + x , cost[i]+y);
            y =  z ;
        }
        
        return min(x,y);
    }
};