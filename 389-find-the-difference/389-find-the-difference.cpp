class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> res;
        for(auto &i : s){
            res[i]++;
        }
        for(auto &i :t){
            if(find(s.begin(),s.end(),i) == s.end() || res[i] ==  0){
                return i;
            }
            res[i]--;
        }
        return  ' ';
    }
};