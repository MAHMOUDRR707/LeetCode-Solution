class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> res;
        for(auto &i :  magazine){
            res[i]++;
        }
        for(auto &i : ransomNote){
            if(res.find(i) ==  res.end()){
                return false;
            }
            if(res[i] == 0){
                return false;
            }
            res[i]--;
        }
        return true;
    }
};