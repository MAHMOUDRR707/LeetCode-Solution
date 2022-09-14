class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =  nums.size();
        int x =  nums[0]*nums[1]*nums[n-1];
        int y =  nums[n-1]*nums[n-1-1]*nums[n-1-2];
        return max(x,y);
    }
};