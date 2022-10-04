class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int ans = 0 ;
        int b = 0;
        map<int,int> res;
        for(auto &i : nums){
            res[i]++;
        }
        for(auto &i : res){
            if(i.second %2 == 0) ans+= i.second/2;
            else {
                b++;
                ans+= i.second/2;
            }
            
        }
        return {ans,b};
    }
};