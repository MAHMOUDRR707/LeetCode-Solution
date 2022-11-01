#include <set>
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>res;
        for(int i = 0 ; i <s.size();i++){
            if(!res[s[i]]){
                res[s[i]] = 1 ;
            }
            else{
                res[s[i]] += 1;
            }
        }
        
        for(int i = 0 ; i < s.size();i++){
            if(res[s[i]] == 1 ){
                return i;
            }
        }
        return -1;
    }
};