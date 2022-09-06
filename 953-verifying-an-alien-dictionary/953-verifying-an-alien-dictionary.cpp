class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> res;
        for(int i = 0 ;i<order.size();i++){
            res[order[i]] = i ;
        }
        for(int i = 1 ; i < words.size() ;i++){
            for(int j = 0 ; j < words[i-1].size();j++){
                
                if(j >= words[i].size()) return false;
                
                if(words[i][j] !=  words[i-1][j]){
                    if (res[words[i-1][j]] >  res[words[i][j]]) return false;
                    break;
                }
            }
        }
        
        return true;
        
    }
};