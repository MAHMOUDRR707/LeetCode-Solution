class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        map<int,int> res;
        for(int i =  0 ;i < nums.size();i++){
            res[nums[i]] = i;
        }
        sort(nums.begin(),nums.end());
        return res[nums.back()];
        
    }
};