class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        string ans ;
        int res =0 ;
        for(int i = 0; i <nums.size();i++){
            ans = nums[i];
            for(int j = 0 ; j < nums.size();j++){
                if(i == j) continue;
                if(ans + nums[j] ==  target) res++;
            }
        }
        return res;
    }
};