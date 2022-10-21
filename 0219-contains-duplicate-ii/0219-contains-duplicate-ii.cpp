class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> res;
        for(int i = 0 ; i < nums.size() ;i++){
            if(res.find(nums[i]) != res.end() && i - res[nums[i]] <= k) return true;
            res[nums[i]] = i;
        }
        return false;
    }
};