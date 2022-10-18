class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>  ans ;
        vector<int> res;
        for(int i = 0 ; i <  s.size() ;i++){
            if(s[i] == c) res.push_back(i);
        }
        for(int i = 0 ; i <  s.size() ;i++){
            int x = abs(res[0] -i) ;
            for(int j = 1 ; j <res.size();j++){
                x = min(x,abs(res[j] -i)) ;
            }
            ans.push_back(x);
        }
        return ans;
    }
};