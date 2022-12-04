class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int ans = 0 ;
        int min_x  = INT_MAX;
        vector<long> sum {nums[0]};
        int n = nums.size();
        for(int i = 1 ; i < n ;i++){
            sum.push_back(sum[i-1] + nums[i]);
        }
        long x ;
        for(int i = 0; i < n ;i++){
            if(i == n -1)x =  abs(sum[i] / (i+1));
            else  x =  abs(sum[i] / (i+1) - (sum[n-1] - sum[i])/(n-i-1)); 
            if (min_x > x ){
                min_x=  x ;
                ans =  i;
            }
        }
        return ans;
    }
};

