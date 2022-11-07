class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<char> res ; 
        for(auto &i : s){
            if(find(res.begin(),res.end(),i) == res.end()) res.push_back(i);
        }
        int ans = count(s.begin(),s.end(),res[0]);
        for(int i = 1 ; i <  res.size() ;i++){
            if(ans != count(s.begin(),s.end(),res[i])) return false;
        }
        return true;
    }
};