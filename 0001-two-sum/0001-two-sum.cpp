class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> res;
        for(int i = 0 ; i < nums.size() ;i++){
            int sub =  target - nums[i];
            if(res.find(sub) != res.end()) return {res[sub],i};
            else  res[nums[i]] = i ;
        }
        return  {};
    }
};