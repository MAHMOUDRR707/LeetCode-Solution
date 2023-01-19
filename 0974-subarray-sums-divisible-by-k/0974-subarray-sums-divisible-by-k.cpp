class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int res = 0 , ans = 0;
        vector<int> helper(k) ;
        helper[0] = 1 ;
        for(auto  &i: nums){
            res =  (res+i%k +k)%k;
            ans +=  helper[res];
            helper[res]++;
        }
        return ans;
    }
};