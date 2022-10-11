class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX ;
        int second =  INT_MAX;
        for(auto &i :  nums){
            if(i < first) first = i;
            else if(i >  first && i < second) second = i;
            else if( second < i) return true ;
            
        }
        return false;
    }
};