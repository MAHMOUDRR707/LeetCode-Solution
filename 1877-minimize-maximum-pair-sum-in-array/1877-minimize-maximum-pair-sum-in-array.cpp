class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> res;
        int ans =  -100000;
        int n =  nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < n/2;i++){
            int h =  nums[i] + nums[n-1-i];
            res.push_back(h);
            ans = max(ans,res[i]);
        }
        return ans;
    }
};