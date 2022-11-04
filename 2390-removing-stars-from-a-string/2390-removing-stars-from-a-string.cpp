class Solution {
public:
    string removeStars(string s) {
        string ans ;
        vector<char> res;
        for(auto &i : s){
            if(i == '*') res.pop_back();
            else  res.push_back(i);
        }
        for(auto &i : res) {
            ans += i;
        }
        return ans;
    }
};