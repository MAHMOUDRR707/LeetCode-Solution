class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ans = 0;
        for(int i =0 ; i<=  ans;i++){
            ans =  max(ans,i+nums[i]);
            if (ans >= nums.size()-1) return true;
        }
        return false;
    }
};