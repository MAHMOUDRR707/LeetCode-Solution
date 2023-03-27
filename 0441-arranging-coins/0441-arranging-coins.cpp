class Solution {
public:
    int arrangeCoins(int n) {
        long l =0;
        long r = n;
        while(l<=r){
            long k =  (l+r)/2;
            long cur = k*(k+1)/2;
            if(cur ==  n) return k ;
            if(n<cur)  r = k-1;
            else  l = k+1;
        }
        return r;
    }
};