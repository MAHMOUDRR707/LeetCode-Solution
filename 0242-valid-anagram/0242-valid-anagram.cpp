class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() !=  t.size()){
            return false;
        }
        map<char,int> res;
        map<char,int> res2;
        for(auto &i : s){
            if(!res[i]){
                res[i] = 1 ;
            }
            else{
                res[i]++;
            }
        }
        
        for(auto &i : t){
            if(!res2[i]){
                res2[i] = 1 ;
            }
            else{
                res2[i]++;
            }
        }
        
        for(auto &i : s){
            if(!res2[i]){
                return false;
            }
            if(res2[i] !=  res[i]){
                return false;
            }
        }
        
        return true;
        
    }
};