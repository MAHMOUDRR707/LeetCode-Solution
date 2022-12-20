class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int i = 0 ; 
        int ans = 0;
        sort(nums.begin(),nums.end());
        while( i <  nums.size() && nums[i] < 0){
            if (k<=0) break;
            nums[i] *= -1;
            k--;
            i++;
        }
        sort(nums.begin(),nums.end());
        if(k > 0 && nums[0] !=0) if(k%2) nums[0] *= -1;
        for(auto &i : nums) ans+=i;
        return ans;

    }
};