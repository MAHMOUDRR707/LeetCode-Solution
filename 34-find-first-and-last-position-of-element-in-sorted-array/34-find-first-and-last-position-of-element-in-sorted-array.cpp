class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int x = -1 ,y = -1 ; 
        for(int i = 0 ; i <  nums.size();i++){
            if(nums[i] ==  target){
                res.push_back(i);
            }
        }
        if(res.empty()){
            return {-1,-1};
        }
        if(res.size() < 2){
            res.push_back(res[0]);
        }
        if(res.size() > 2 ){
            vector<int> ans;
            ans.push_back(res[0]);
            ans.push_back(res.back());
            return ans;
        }
        return res;
    }
};