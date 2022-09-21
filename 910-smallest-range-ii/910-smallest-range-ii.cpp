class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int x =  nums[0];
        int y =  nums.back();
        int ans =  y -x;
        for(int  i= 0 ; i <nums.size() -1 ;i++){
            int a =  nums[i];
            int b =  nums[i+1];
            ans =  min(ans,max(y-k,a+k) - min(x+k , b-k));
        }
        return  ans;
    }
};