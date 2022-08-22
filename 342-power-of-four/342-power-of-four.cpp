#include <bits/stdc++.h>

class Solution {
public:
    int helper(int a, int b){
        int res =  log2(a)/log2(b);
        return res;
    }
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        int res =  helper(n,4);
        if(pow(4,res) == n) {
            return true;
        }
        return false;
    }
};