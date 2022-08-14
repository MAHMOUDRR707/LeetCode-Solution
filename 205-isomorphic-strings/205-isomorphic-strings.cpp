class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int>s_new ;
        map<char,int> t_new;
        int tt  = 1 , ss = 1 ;
        for(int i = 0 ; i<s.size();i++ ){
            if(!s_new[s[i]]){
            s_new[s[i]] = ss;
                ss++;
            }
            
            if(!t_new[t[i]]){
            t_new[t[i]] = tt;
                tt++;
            }
        }
           
        
        for(int i = 0 ; i < t.size();i++){
            s[i] =  s_new[s[i]];
            t[i] =  t_new[t[i]];
            }
        
        return s==t;
    }
};