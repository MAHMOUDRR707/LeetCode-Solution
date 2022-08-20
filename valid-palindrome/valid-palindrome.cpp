#include<sstream>
class Solution {
public:
    bool isPalindrome(string s) {
        if(s == " "){
            return true;
        }
        string str; 
        for(int i =0 ; i < s.size();i++){
            if(ispunct(s[i]) ||  isspace(s[i])){
                continue;
            }
            else{
                str += tolower(s[i]);
            }
        }
        string rev =  str;
        reverse(rev.begin(),rev.end());
        if(rev ==  str){
            
            return true;
        }
        cout << rev  << " " << str;
        return false;
    }
};