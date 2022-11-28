class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      map<int,int> win ;
      map<int,int> lose;
         for(int i = 0 ; i < matches.size() ;i++){
             win[matches[i][0]] ++;
             lose[matches[i][1]]++;
         }
     vector<int> ans;
        for(auto &i : win ){
            if(lose.find(i.first)  == lose.end()) ans.push_back(i.first);
        }
        vector<int> ans2;
        for(auto &i : lose ){
            if(i.second == 1) ans2.push_back(i.first);
        }
        return {ans,ans2};
    }
};