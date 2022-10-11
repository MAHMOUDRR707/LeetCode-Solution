class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n =  nums.size();
        unordered_map<int, int> res;
        int ans = 0;
        res[nums[n-1]] = 1;
        for(int i = n-2 ; i >0 ;i--){
          for(int j = i-1 ; j  >0 ; j--){
              for(int k = j-1 ; k >= 0 ;k--){
                  if(res.count(nums[i]+nums[j]+nums[k])) 
                      ans +=  res[nums[i]+nums[j]+nums[k]];
              }
          }
            res[nums[i]] += 1 ;
        }
        return ans;
    }
};