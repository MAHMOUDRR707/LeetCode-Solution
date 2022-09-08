class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     
        map<int,int> res;
        for(auto &i : nums){
            if(res[i] == 1 ){
                return true;
            }
            else{
                res[i] = 1 ;
            }
        }
        
    return false;
    }
};