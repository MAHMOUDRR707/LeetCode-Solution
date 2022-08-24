class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n =  s.size() , m =  p.size();
        if(n<m){
            return {};
        }
        vector<int> res(26,0);
        vector<int>res2(26,0);
        vector<int> ans;
        for(int i = 0 ; i < m ; i++){
                res[p[i] -'a']++;
                res2[s[i] -'a']++  ;
        }
        if(res == res2){
            ans.push_back(0);
        }
        for(int i = m; i <  n;i++){
            res2[s[i-m]-'a']--;
            res2[s[i]- 'a']++;
             if(res==res2){
                 ans.push_back(i-m+1);
             }
        }
        return ans;
    }
   
};