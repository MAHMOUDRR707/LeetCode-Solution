class Solution {
public:
    int jump(vector<int>& nums) {
      int n =  nums.size();
      int start = 0 , end = 0 ,ans =0;
      for(int i = 0; i<  n-1;i++){
          start =  max(start,nums[i]+i);
          if(end == i){
              ans +=1;
              end = start;
          }
      }
        return ans ;
    }
};