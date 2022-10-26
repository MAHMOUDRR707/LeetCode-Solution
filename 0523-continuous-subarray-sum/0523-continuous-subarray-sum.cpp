class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> res{{0,0}};
        int count = 0;
        for(int i = 0 ; i < nums.size();i++){
            count +=  nums[i];
            if(!res.count(count%k))  res[count%k] = i+1;
            else if(res[count%k] < i)  return true;
        }
        return false;
    }
};