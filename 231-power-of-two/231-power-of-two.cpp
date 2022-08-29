class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0 ){
            return false;
        }
        int m =  log2(n);
        if(pow(2,m) == n){
            return true;
        }
        return false;
    }
};