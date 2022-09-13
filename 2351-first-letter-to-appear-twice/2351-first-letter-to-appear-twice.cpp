class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> res;
        for(auto &i : s){
            res[i]++;
            if(res[i] == 2) return i;
        }
        return 'a';
    }
};