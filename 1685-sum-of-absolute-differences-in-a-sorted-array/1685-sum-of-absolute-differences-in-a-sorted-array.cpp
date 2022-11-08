class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        int sb  = 0 , sa = 0;
        for(auto &i : nums){
            sa+=i;
        }
        for(int i= 0 ; i < nums.size();i++){
            sa -= nums[i] ;
            ans.push_back(sa - (nums.size() - 1 - i) * nums[i] + i * nums[i] - sb);
            sb +=  nums[i];
        }
        return ans;
    }
};