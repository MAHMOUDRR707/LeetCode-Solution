class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> res;
        for(auto &i :  nums){
            res[i]++;
        }
        vector<int> ans;
        for(auto &i : res){
            if(i.second >= 2) ans.push_back(i.first);
        }
        return ans;
    }
};