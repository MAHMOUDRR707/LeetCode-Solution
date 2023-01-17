class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        int ans = 0  , res = 0 ;
        for(auto &i :s) {
            if(i == '0') res++;
        }
        ans =  res;
        for(auto &i :s) {
            if(i == '0') {
                res-- ;
                ans =  min(ans,res);
            }
            else res++;
        }
            return ans;
    }
};