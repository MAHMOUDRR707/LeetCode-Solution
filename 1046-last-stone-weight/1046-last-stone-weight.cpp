class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int x , y ;
        sort(stones.begin(),stones.end());
        while(stones.size() > 1){
            int m  = stones.size();
            x =  stones[m-2];
            y = stones[m-1];
            if(x==y){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                stones.pop_back();
                stones.pop_back();
                stones.push_back(y-x);
                sort(stones.begin(),stones.end());
            }
        }
        if (stones.empty()) return 0;
        return stones[0];
        
    }
};