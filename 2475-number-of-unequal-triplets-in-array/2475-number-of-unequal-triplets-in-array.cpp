class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int ans = 0;
        for(int i =0 ;i < nums.size();i++){
            for(int j = i+1 ;j<nums.size();j++){
                if (nums[i] == nums[j] ) continue ;
                for(int k = j+1 ; k< nums.size();k++){
                    if (nums[k] == nums[j] || nums[k] == nums[i] ) continue ;
                    else {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};