class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0 ; i < nums.size() ;i ++){
            int x =  nums[i] ,y = nums[i];
            for(int j = i+1 ; j <  nums.size() ;++j){
                y =  max(y,nums[j]);
                x =  min(x,nums[j]);
                ans+= y-x;
            }
        }
        return ans;
    }
};