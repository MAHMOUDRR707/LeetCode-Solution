class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int x = nums[0];
        int y =  nums.back();
        if(((y-k) - (x+k)) > 0)  return (y-k) -(x+k);
        return 0;
    }
};