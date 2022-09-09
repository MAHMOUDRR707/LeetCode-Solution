class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> res(n,INT_MAX);
        for(int i = 0 ; i < nums.size() ;i ++){
           if(res[index[i]] == INT_MAX){
               res[index[i]] =  nums[i];
           }
           else{
               res.insert(res.begin()+index[i],nums[i]);
           }
        }
        vector<int> ans(n,0);
        for(int i =  0 ; i <  n ; i++){
            ans[i] =  res[i];
        }
        return ans;
    }
};