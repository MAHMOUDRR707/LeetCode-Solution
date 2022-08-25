class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int max_x = nums[0] , x = nums[0];
      for(int i = 1 ; i <  nums.size();i++){
             if (x < 0){
                 x = 0 ;
             }
             x  +=  nums[i];
             max_x = max(max_x,x);
      }
        return max_x;
    }
};