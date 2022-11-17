class Solution {
public:
    int countElements(vector<int>& nums) {
      int mx = *max_element(nums.begin(),nums.end());   
      int mi = *min_element(nums.begin(),nums.end());  
      int ans = 0;
      for(auto &i : nums){
          if(i !=  mx &&  i !=  mi){
              ans++;
          }
      }
        return ans;
    }
};