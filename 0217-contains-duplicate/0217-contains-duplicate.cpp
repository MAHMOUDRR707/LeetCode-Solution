class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     
        map<int,int> res;
        for(auto &i: nums){
            res[i] ++ ;
        }
        for(auto &i: res){
            if (res[i.first] > 1 ) return true;
        }
        
        return false;
    }
};