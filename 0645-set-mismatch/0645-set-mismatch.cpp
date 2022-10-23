class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> res;
        for(auto &i : nums){
            res[i]++;
        }
        vector<int> ans(2);
        for(int i = 1 ; i <  nums.size()+1;i++){
            if(res.find(i) == res.end()) ans[1] = i;
            else if(res[i] >1 ) ans[0] =  i;
        }
        return ans;
    }
};