class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int ans = 0;
        for (int i = 1 ; i <nums.size();i++){
            if(nums[i] ==  nums[i-1]) {
                ans ++;
                nums[i]++;
            }
            
            else if(nums[i] -nums[i-1] < 0){
                ans += -(nums[i] -nums[i-1])+1;
                nums[i] = nums[i-1] +1 ;
            }
        }
        return ans;
    }
};