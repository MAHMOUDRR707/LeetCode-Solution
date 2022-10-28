class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> ans;
        vector<vector<string>> res ;
        for(auto &i : strs){
            string x =  i;
            sort(x.begin(),x.end());
            ans[x].push_back(i);
        }
        for(auto  &i : ans ){
            res.push_back(i.second);
        }
        return res;
    }
};