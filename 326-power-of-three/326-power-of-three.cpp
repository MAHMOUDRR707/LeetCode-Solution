class Solution {
public:
    int helper(int n ){
        int res  =  log2(n)/log2(3);
        return res;
    }
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        int res = helper(n);
        if(pow(3,res) == n ){
            return true;
        }
        return false;
    }
};