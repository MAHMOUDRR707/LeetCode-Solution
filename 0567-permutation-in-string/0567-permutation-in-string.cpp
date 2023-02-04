class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> res;
        for(auto &i : s1){
            if(!res[i]){
                res[i] = 1 ;
            }
            else{
                res[i] ++;
            }
        }
        
        int n =  s1.size();
        int m  = s2.size();
        
        for(int i = 0 ; i < m ; i++){
            if(res.find(s2[i])!= res.end()){
                res[s2[i]]--;
            }
            if(i >= n && res.find(s2[i-n]) != res.end()){
                res[s2[i-n]]++;
            }
            int x =0;
            for(auto const &j : res){
                if(j.second == 0){
                    x++;
                }
            }
            if(x == res.size()){
                return true;
            }
        }
      return false;
    }
};