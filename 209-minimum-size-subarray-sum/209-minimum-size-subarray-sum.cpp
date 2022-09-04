class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int s = 0 ; 
       int ans = INT_MAX;
       int l = 0;
       for(int i = 0 ; i< nums.size();i++){
           s +=  nums[i];
           while(s >=  target){
               ans = min(ans,(i+1-l));
               s -=  nums[l++];
           }
       }
        if (ans == INT_MAX ) return 0 ;
        return ans;
    }
};