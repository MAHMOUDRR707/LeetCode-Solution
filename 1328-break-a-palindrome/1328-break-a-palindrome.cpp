class Solution {
public:
    string breakPalindrome(string p) {
     int n = p.size();
     int mid  = n / 2;
     if(n == 1 ) return "";
     for(int i = 0 ; i < mid ;i++){
         if(p[i] != 'a'){
             p[i] = 'a';
             return p;
         }
     }
     p[n-1] = 'b';
     return p;
    }
};