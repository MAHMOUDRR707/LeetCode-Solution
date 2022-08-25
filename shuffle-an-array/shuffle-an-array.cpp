class Solution {
public:
    vector<int> res;
    vector<int> ans;
    Solution(vector<int>& nums) {
        res = nums;
        ans =  nums;
    }
    
    vector<int> reset() {
        res =  ans;
        return res;
    }
    
    vector<int> shuffle() {
        random_shuffle(res.begin(),res.end());
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */