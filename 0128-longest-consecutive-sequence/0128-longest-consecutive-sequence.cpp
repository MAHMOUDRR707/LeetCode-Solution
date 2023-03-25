class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int ans = 1;
        int helper = 1;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i <  nums.size() -1 ;i++){
          if(nums[i] != nums[i+1]){
            if(nums[i] ==  nums[i+1]-1) helper +=1 ;
            else {
                ans = max(helper,ans);
                helper = 1 ;
            }
          }
        }
        return max(ans,helper) ;
    }
};