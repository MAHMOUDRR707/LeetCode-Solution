class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string res = s+s;
        int n =  s.size();
        for(int i =1 ; i < n ;i++){
            string x = res.substr(i,n);
            if(x == s)return true;
        }
        return false;
    }
};