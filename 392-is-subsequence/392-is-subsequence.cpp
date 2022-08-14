#include <string>
class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ans ;
        int count = 0 ;
        if(s == ""){
            return true;
        }
        for(int i = 0 ; i <  t.size();i++){
             size_t found_t = s.find(t[i]);
             if(found_t !=  string::npos){
                 if(t[i] == s[count]){
                     count++;
                     ans +=  t[i];
                     if (ans == s ){
                         
                         return true;
                     }
                 }
             }
            
        }
        return false;
    }
};