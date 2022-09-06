#include <cctype>
class Solution {
public:
    string toLowerCase(string s) {
        for_each(s.begin(),s.end(),[](char & s){
        s = ::tolower(s);
                                               });
        return s;
    }
};