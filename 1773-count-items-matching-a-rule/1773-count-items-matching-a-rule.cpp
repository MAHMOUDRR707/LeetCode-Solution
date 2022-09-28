class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
     map<string,vector<string>> res;
     res["color"] ={};
     res["type"] = {};
     res["name"] = {};
     for(auto &i : items){
         res["type"].push_back(i[0]);
         res["color"].push_back(i[1]);
         res["name"].push_back(i[2]);
     }
      vector<string> ans =  res[ruleKey];
      int result = count(ans.begin(),ans.end(),ruleValue);
      return result;
    }
};