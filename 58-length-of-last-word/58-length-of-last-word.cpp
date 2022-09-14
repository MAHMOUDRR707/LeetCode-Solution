#include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLastWord(string s) {
       istringstream ss(s);
        string word ;
        int  ans = 0 ;
        while(ss >>  word){
            ans =  word.size();
        }
        return ans;
    }
};